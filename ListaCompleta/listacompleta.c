#include <stdio.h>
#include <stdlib.h>

typedef struct ListaEncadeada{
    int conteudo;
    struct ListaEncadeada * proxima;
}Celula;

Celula *CriaCelula();
void Inserir (Celula *le, int x);
void imprimir (Celula *le);
void remover (Celula *le);
void BuscaRemove (Celula *le, int Conteudo);
Celula *buscaElemento (Celula *le, int Conteudo);

int main (){

    Celula *le;
    Celula *aux;
    le = CriaCelula ();

    int Contador, Valor;
    char Escolha;

    while (1){
        Contador++;
        printf ("Digite um Numero: ");
        scanf ("%d", &Valor);
        Inserir (le, Valor);

        printf ("Deseja adicionar uma nova Celula? [S] [N] ");
        scanf("%s", &Escolha);

        if (Escolha == 's' || Escolha == 'S')
            continue;
        else 
            break;
    }
    
    imprimir (le);

    printf ("\n-----------------------------------------------------\n");
    printf ("Removendo primeiro elemento: ");
    remover (le);
    imprimir(le);
    printf ("\n-----------------------------------------------------\n");


    printf ("\n-----------------------------------------------------\n");
    printf ("Digite o numero que voce deseja remover: ");
    scanf ("%d", &Valor);
    printf ("Removendo elemento: ");
    BuscaRemove (le, Valor);
    imprimir(le);
    printf ("\n-----------------------------------------------------\n");

    printf ("\n-----------------------------------------------------\n");
    printf ("Digite o numero que voce quer procurar: ");
    scanf ("%d", &Valor);
    aux = buscaElemento (le, Valor);
    printf ("%d \n", aux->conteudo);

    return 0;
}

Celula *CriaCelula (){
    Celula *PontoInicial = malloc (sizeof(Celula));
    PontoInicial->proxima = NULL;
}

void Inserir (Celula *le, int x){
    Celula *NovaCelula  = malloc (sizeof (Celula));
    NovaCelula->conteudo = x;
    NovaCelula->proxima = le->proxima;
    le->proxima = NovaCelula;
}

void imprimir (Celula *le){
    Celula *i;
    for (i = le->proxima; i != NULL; i = i->proxima)
        printf ("%d ", i->conteudo);
}

void remover (Celula *le){
    Celula *Lixo = le->proxima;
    le->proxima = Lixo->proxima;
    free (Lixo);
}

void BuscaRemove (Celula *le, int Conteudo){
    Celula *aux, *aux2;
    aux = le;
    aux2 = le->proxima;

    while (aux2 != NULL && aux2->conteudo != Conteudo){
        aux = aux2;
        aux2 = aux2->proxima;
    }
    if (aux2 != NULL){
        aux->proxima = aux2->proxima;
        free (aux2);
    }
}

Celula *buscaElemento (Celula *le, int Conteudo){
    Celula *b;

    for (b = le->proxima; b != NULL && b->conteudo != Conteudo; b = b->proxima);
    return b;
}
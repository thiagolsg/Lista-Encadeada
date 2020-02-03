#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

//void imprime (celula *le);
//void imprime_rec (celula *le);
//void Inserir (celula *le, int x);


/*celula *CriaCelula (){
    celula *PontoInicial = malloc (sizeof(celula));
    PontoInicial->prox = NULL;
}
*/
/*int main(){
    celula *le;
    int Valor;
    le=CriaCelula();
        
        while(scanf("%d",&Valor)!=EOF){

               Inserir (le, Valor);

        }
        imprime(le);
//          imprime_rec(le);  

    return 0;
}
*/

/*void Inserir (celula *le, int x){
    celula *NovaCelula  = malloc (sizeof (celula));
    NovaCelula->dado = x;
    NovaCelula->prox = le->prox;
    le->prox = NovaCelula;
}
*/




void imprime (celula *le){
    celula *i;
    if(le->prox==NULL){
        printf("NULL\n");
    }
    else{
        for (i = le->prox; i != NULL; i = i->prox)
            printf ("%d -> ", i->dado);
        printf("NULL\n");
    }
    
}

void imprime_rec(celula *le){
    
    if(le->prox==NULL){
          printf("NULL\n");
    }
    else{
        printf("%d -> ",le->prox->dado);
        imprime_rec(le->prox);
    }




}
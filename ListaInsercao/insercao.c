#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;
/*
void imprime (celula *le);
void imprime_rec (celula *le);
void Inserir (celula *le, int x);
//void Inserir_rec(celula *le,int x);
void insere_antes (celula *le, int x, int y);

celula *CriaCelula (){
    celula *PontoInicial = malloc (sizeof(celula));
    PontoInicial->prox = NULL;
}

int main(){
    celula *le;
    int Valor;
    le=CriaCelula();
        
        while(scanf("%d",&Valor)!=EOF){

               Inserir(le, Valor);
        }

        insere_antes(le,10,5);

        imprime(le);
//          imprime_rec(le);  

    return 0;
}

*/
void insere_inicio (celula *le, int x){
    celula *novacelula=malloc(sizeof(celula));
    novacelula->dado=x;
    novacelula->prox=le->prox;
    le->prox=novacelula;

}

void insere_antes (celula *le, int x, int y){
    celula *novacelula=malloc(sizeof(celula));
   // int i=0;
    while(le->prox!=NULL && le->prox->dado!=y){
        le=le->prox;
    }
 
    novacelula->dado=x;
    novacelula->prox=le->prox;
    le->prox=novacelula;



}









/*
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




}*/
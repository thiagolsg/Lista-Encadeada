#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;
/*
celula *criacelula(){
    celula *pontoinicial=malloc(sizeof(celula));
    pontoinicial->prox=NULL;
}

void insere_inicio (celula *le, int x){
    celula *novacelula=malloc(sizeof(celula));
    novacelula->dado=x;
    novacelula->prox=le->prox;
    le->prox=novacelula;

}
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
*/
void divide_lista (celula *l, celula *l1, celula *l2){
        celula *aux;
        aux=l->prox;
    while(aux!=NULL){
        
        if(aux->dado%2!=0){
       
            l1->prox=aux;
            l1=l1->prox;
            aux=aux->prox;
            l1->prox=NULL;
           

        }
        else{
       
            l2->prox=aux;
            l2=l2->prox;
            aux=aux->prox;
            l2->prox=NULL;

        }


    }





}
/*
int main(){
    celula *le;
    celula *l1;
    celula *l2;
    int Valor;
    le=criacelula();
    l1=criacelula();
    l2=criacelula();
        
        while(scanf("%d",&Valor)!=EOF){

               insere_inicio(le, Valor);
        }

//        insere_antes(le,10,5);
        divide_lista(le,l1,l2);

        imprime(l1);
 //       printf("\n");
        imprime(l2);
//          imprime_rec(le);  

    return 0;
}
*/
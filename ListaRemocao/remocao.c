#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

int remove_depois(celula *p){
    celula *aux=p->prox;
    
    if(aux!=NULL){
        p->prox=aux->prox;
        free(aux);
    }

}

void remove_elemento(celula *le, int x){
    celula *aux;

for(aux=le;aux->prox!=NULL && aux->prox->dado!=x;aux=aux->prox);

remove_depois(aux);



}

void remove_todos_elementos(celula *le, int x){
    celula *aux=le;

  while(aux->prox!=NULL){
    if(aux->prox->dado==x){
        remove_depois(aux);
    }
    else{
        aux=aux->prox;
    }
  }
}


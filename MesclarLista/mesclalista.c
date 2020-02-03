#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;
/*
celula *CriaLista(){
    celula *pontoinicial=malloc(sizeof(celula));
    pontoinicial->prox=NULL;
}

void Inserir(celula *le,int x){
    celula *novacelula=malloc(sizeof(celula));
    novacelula->dado=x;
    novacelula->prox=le->prox;
    le->prox=novacelula;
}

void insere_antes (celula *le, int x, int y){
    celula *novacelula=malloc(sizeof(celula));
   while(le->prox->dado!=y && le->prox!=NULL){
       le=le->prox;
   }
    novacelula->dado=x;
    novacelula->prox=le->prox;
    le->prox=novacelula;

}

void imprime (celula *le){
    celula *i;
    for(i=le->prox;i!=NULL;i=i->prox){
        printf("%d -> ",i->dado);
    }
    printf(" NULL\n");

}
void imprime_rec (celula *le){
    if(le->prox==NULL){
        printf(" NULL\n");
    }
    else{
        printf("%d -> ",le->prox->dado);
        imprime_rec(le->prox);
    }
}

celula *busca (celula *le, int x){
    celula *i;
    for(i=le;i!=NULL && i->dado!=x;i=i->prox);

    return i;

}

celula *busca_rec (celula *le, int x){
    if(le->prox==NULL){
        return NULL;
    }
    else{
        if(le->prox->dado==x){
            return le->prox;
        }
        else{
            return busca_rec(le->prox,x);
        }
    }
}


*/

void mescla_listas (celula *l1, celula *l2, celula *l3){
    celula *lista1,*lista2,*ultimo,*aux;    
    ultimo=l3;
    lista1=l1->prox;
    lista2=l2->prox;
    while(lista1!=NULL && lista2!=NULL){
        if(lista1->dado < lista2->dado){
            aux=lista1->prox;
            ultimo->prox=lista1;
            lista1=aux;
        }
        else{
            aux=lista2->prox;
            ultimo->prox=lista2;
            lista2=aux;
        }
        ultimo=ultimo->prox;
    }
    if(lista1==NULL){
        ultimo->prox=lista2;
    }
    else if(lista2==NULL){
         ultimo->prox=lista1;
    }

}

/*
int main(){

    celula *l1;
    celula *l2;
    celula *l3;
    l1=CriaLista();
    l2=CriaLista();
    l3=CriaLista();
    int x;

    while(scanf("%d",&x)!=EOF){
        Inserir(l1,x);
    }

    while(scanf("%d",&x)!=EOF){
        Inserir(l2,x);
    }

//    mescla_listas(l1,l2,l3);

   // imprime_rec(l3);

printf("%d\n",busca(l1,4)->dado);

    return 0;
}
*/
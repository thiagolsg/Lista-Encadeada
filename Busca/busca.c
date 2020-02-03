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
celula *busca(celula *le,int x){
    celula *p;
    for(p=le;p!=NULL && p->dado!=x;p=p->prox);
    return p;
}

celula *busca_rec(celula *le,int x){
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

/*
int main(){
    celula *le;
    int Valor;
    le=CriaCelula();
        
        while(scanf("%d",&Valor)!=EOF){

               Inserir (le, Valor);

        }
        imprime(le);
//          imprime_rec(le);  

      printf("%d",busca_rec(le,5)->dado);


    return 0;
}


void Inserir (celula *le, int x){
    celula *NovaCelula  = malloc (sizeof (celula));
    NovaCelula->dado = x;
    NovaCelula->prox = le->prox;
    le->prox = NovaCelula;
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

void imprime_rec(celula *le){
    
    if(le->prox==NULL){
          printf("NULL\n");
    }
    else{
        printf("%d -> ",le->prox->dado);
        imprime_rec(le->prox);
    }
}
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct monstro{
    int  id, level, vida, ataque, defesa;
    char nome[20];
}monstro;
void leituraDeLista(int numMons, monstro *lista){
    int i;
    for(i=0;i<numMons;i++){
        scanf(" %[^\n] ", lista[i].nome);
        scanf("%d %d %d %d %d", &lista[i].id, &lista[i].level, &lista[i].vida,
         &lista[i].ataque, &lista[i].defesa);
    }
}
void printOfList(monstro * lista, int numMons){
    int i;
    for(i=0;i<numMons;i++){
    printf("Nome: %s\nID: %d\nLevel: %d\nVida: %d\nAtaque: %d\nDefesa: %d",
     lista[i].nome, lista[i].id, lista[i].level, lista[i].vida,
      lista[i].ataque, lista[i].defesa);
    if(i!=numMons-1)printf("\n");  
    }
}
int main(){
    int numMons;
    monstro *lista;
    scanf("%d", &numMons);
    lista= malloc(numMons*sizeof(monstro));
    leituraDeLista(numMons,lista);
    printOfList(lista, numMons); 
    return 0; 
}

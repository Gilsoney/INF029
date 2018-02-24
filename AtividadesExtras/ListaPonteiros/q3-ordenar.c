 
#include <stdio.h>
#include <stdlib.h>

// Q3

int ordena(int *valores);

int main(){
    int vetor[5];
    int i;
    printf("Digite 5 valores\n");
    for(i=0; i<5; i++){
        scanf("%d",&vetor[i]);
    }
    ordena(vetor);

    for(i=0; i<5; i++){
        printf("%d, ", vetor[i]);
    }

}

 int ordena(int *valores){
    int i,j,aux;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(valores[i]<valores[j]){
                aux=valores[i];
                valores[i]=valores[j];
                valores[j]=aux;
            }
        }
     }
 }

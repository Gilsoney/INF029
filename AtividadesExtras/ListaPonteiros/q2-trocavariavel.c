 
#include <stdio.h>
#include <stdlib.h>

// Q2

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}


int main()
{
    int valor1, valor2;

    printf("Digite um valor para A\n");
    scanf("%d",&valor1);

    printf("Digite um valor para B\n");
    scanf("%d",&valor2);

    troca(&valor1,&valor2);

    printf("A = %d, B = %d\n", valor1, valor2);

    return 0;
}

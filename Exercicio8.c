/*Exercício 8)
Leia dois vetores A e B, cada um com 10 números inteiros. Crie um terceiro vetor C onde cada posição será a soma dos 
elementos correspondentes de A e B. Dica: use o mesmo índice para acessar os dois vetores ao mesmo tempo.*/

#include <stdio.h>

int main()
{
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];
    int i;

    printf("Digite 10 numeros inteiros para o Vetor A\n");

    for ( i = 0; i < 10; i++)
    {
        printf("Vetor A [%d] ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    printf("Digite 10 numeros inteiros para o Vetor B\n");

    for ( i = 0; i < 10; i++)
    {
        printf("Vetor B [%d] ", i + 1);
        scanf("%d", &vetorB[i]);
    }
    printf("\n");

    printf("Soma dos vetores: [");

    for ( i = 0; i < 10; i++)
    {
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    
    for ( i = 0; i < 10; i++)
    {
        
        printf("%d", vetorC[i]);
        if (i < 10 - 1) 
            {
                printf(", "); 
            }     
    }

    printf("]\n\n");
        
}
    

    


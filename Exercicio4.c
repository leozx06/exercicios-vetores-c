/*Exercício 4)
Leia 10 números inteiros e determine qual é o maior valor presente no vetor.
Dica: inicialize uma variável com o primeiro elemento do vetor e compare com os demais. */

#include <stdio.h>

int main()
{
    int num[10];
    int i;

    printf("Digite 10 numeros inteiros\n");

    for ( i = 0; i < 10; i++)
    {
        printf("Numero [%d] ", i + 1);
        scanf("%d", &num[i]);
    }

    int maior = num[0];  // Movido para depois do scanf para evitar lixo eletronico por causa do i + 1

    for (i = 1; i < 10; i++)  // Loop dos scans começando do segundo valor do vetor, pois o primeiro já é a int maior
    {
        if (num[i] > maior)  // Se o segundo for maior que o primeiro ele toma seu lugar, assim em diante 
        {
            maior = num[i];
        }
    
    }

    printf("O maior numero e: %d", maior);
    
    return 0;
}
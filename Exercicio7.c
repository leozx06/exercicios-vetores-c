/*Exercício 7)
Leia um vetor de 10 números inteiros e, em seguida, leia um número X. Verifique se o valor X está presente no vetor.
Dica: percorra o vetor comparando cada elemento com X. */
#include <stdio.h>

int main()
{
    int num[10];
    int i, x;
    int presente = 0;

    printf("Digite 10 numeros inteiros\n");

    for ( i = 0; i < 10; i++)
    {
        printf("Numero [%d] ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("Confira se um numero esta no vetor: ");
    scanf("%d", &x);

    for ( i = 0; i < 10; i++)
    {
        if (x == num[i])
        {
            presente = 1;
            break;
        }                
    }

    if (presente)
    {
        printf("[%d] Esta presente no vetor", x);
    } else
    {
        printf("[%d] Nao esta presente no vetor", x);
    }
        
    return 0;
}
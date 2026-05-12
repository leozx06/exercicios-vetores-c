/**Leia 10 números inteiros e mostre apenas os números pares armazenados no vetor.
Dica: utilize o operador % para verificar se o número é par. */

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

    printf("Numeros Digitados Pares:\n");

    for ( i = 0; i < 10; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("Numero [%d] = %d\n", i + 1, num[i]);
        }       
        else
        {
            printf("");
        }
    }      

    return 0;
}
/*Exercício 6)
Leia 10 números inteiros e informe quantos são positivos, quantos são negativos e quantos são iguais a zero.
Dica: utilize três variáveis contadoras. */

#include <stdio.h>

int main()
{
    int num[10];
    int i;
    int zero = 0, plus = 0, minus = 0;

    printf("Digite 10 numeros inteiros positivos ou negativos: \n");

    for ( i = 0; i < 10; i++)
    {
        printf("Numero [%d] ", i + 1);
        scanf("%d", &num[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        if (num[i] == 0)
        {
            zero++;
        }
        else if (num[i] < 0)
        {
            minus++;
        }
        else
        {
            plus++;
        }       
    }
    
    printf("Zeros: %d\n", zero);
    printf("Positivos: %d\n", plus);
    printf("Negativos: %d\n", minus);

return 0;

}

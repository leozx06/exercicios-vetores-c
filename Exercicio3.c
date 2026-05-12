/**Exercício 3)
Leia 10 números inteiros e calcule a soma de todos os elementos do vetor. Ao final, exiba o resultado.
Dica: use uma variável acumuladora para armazenar a soma.**/

#include <stdio.h>

int main()
{
    int num[10];
    int i;
    int soma = 0;

    printf("Digite 10 numeros inteiros\n");

    for ( i = 0; i < 10; i++)
    {
        printf("Numero [%d] ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 10; i++)  // Loop dos scans
{
    soma = soma + num[i];  /**Como a int soma tem valor 0, seu resultado sera o numero, 
                            'que ira somar com os outros**/
}

printf("Soma = %d\n", soma);

    return 0;
}
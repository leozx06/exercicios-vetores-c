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

    /**#include <stdio.h>

int main() {
    int original[] = {0, 1, 1, 1, 0, 0, 1, 0};
    int apenasZeros[8]; 
    int j = 0;

    // Filtra apenas os zeros
    for (int i = 0; i < 8; i++) {
        if (original[i] == 0) {
            apenasZeros[j] = original[i];
            j++;
        }
    }

    // Formata a saída: apenasZeros[0, 0, 0, 0]
    printf("apenasZeros[");
    for (int i = 0; i < j; i++) {
        printf("%d", apenasZeros[i]);
        if (i < j - 1) {
            printf(", "); // Adiciona a vírgula apenas entre os números
        }
    }
    printf("]\n");

    return 0;
}
 */
    

}
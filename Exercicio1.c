#include <stdio.h>

/**Declare um vetor de 10 números inteiros. Leia os valores digitados pelo usuário e,
 ao final, exiba todos os elementos do vetor na tela.
Dica: utilize um laço de repetição para leitura e outro para exibição; lembre-se
 que os índices vão de 0 até 9.**/

int main()
{
    int num[10];
    int i;

    printf("Digite 10 numeros inteiros\n");

    for (i = 0; i < 10; i++)
    {
        printf("Numero [%d] ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("Numeros Digitados:\n");
    
    for (i = 0; i < 10; i++)
    {
        printf("Numero[%d] = %d\n", i, num[i]);

    }

    return 0;
}
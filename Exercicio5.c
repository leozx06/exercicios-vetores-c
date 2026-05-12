/*Exercício 5)
Leia 10 números inteiros e exiba os valores na ordem inversa da leitura.
Dica: percorra o vetor do último índice até o primeiro.*/

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

    printf("Lista em reverso:\n");

    for ( i = 9; i >= 0; i--) // Começa do ultimo (9) e percorre ate o inicio (0)
    {
        printf("Numero [%d]: %d\n", i + 1, num[i]);
    }
    
    return 0;
}
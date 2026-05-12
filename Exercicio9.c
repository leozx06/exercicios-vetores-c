/*Exercício 9)
Leia uma palavra e informe quantos caracteres ela possui.
Dica: percorra o vetor de caracteres até encontrar o caractere nulo ('\0').*/
#include <stdio.h>

int main()
{
    char palavra[50];
    int i, tamanho = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (i = 0; palavra[i] != '\0'; i++)
    {
        tamanho++;
    }

    printf("%s: %d letras\n", palavra, tamanho);

    return 0;
}
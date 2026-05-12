/* Exercício 10)
Leia uma palavra e verifique se ela é um palíndromo (ou seja, se pode ser lida da mesma forma de trás para frente).
Dica: compare os caracteres das extremidades (início e fim) do vetor.*/
#include <stdio.h>

int main()
{
    char palavra[50];
    int i, tamanho = 0;
    int palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    while (palavra[tamanho] != '\0')
    {
        tamanho++;
    }

    for ( i = 0; i < tamanho / 2; i++) // tamanho/2 para nao repetir a mesma comparação 2 vezes
    {
        if (palavra[i] != palavra[tamanho - 1 - i]) /*Checa o primeiro char com o ultimo e depois o 2 com o penultimo em diante*/
        {
            palindromo = 0;
            break;
        }        
    }

    if (palindromo)
        printf("[%s] E um palindromo\n", palavra);
    else
        printf("[%s] Nao e um palindromo.\n", palavra);

    return 0;
    
    




}

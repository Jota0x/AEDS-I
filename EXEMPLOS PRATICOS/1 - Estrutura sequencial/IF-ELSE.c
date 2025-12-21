#include <stdio.h>

// Estrutura sequencial simples if/else (se/senão)
// Esse programa verifica se uma pessoa é maior de idade ou não
int main()
{
    // declara a variavel idade como um inteiro
    int idade;

    // le a idade
    printf("Digite idade: ");
    scanf("%d", &idade);

    if (idade < 0)
    // início do bloco de código
    {
        printf("Idade invalida!");
    } // fim do bloco de código
    else if (idade >= 18)
    // início do bloco de código
    {
        printf("Maior de idade!");
    } // fim do bloco de código
    else
        printf("Menor de idade!");

    // O codigo verifica se o que está dentro do parênteses é verdade, caso seja, o bloco de codigo é executado, caso não, pula para o proxímo else-if e assim por diante, em caso de todos serem falsos o else será executado

    return 0;
} // end main
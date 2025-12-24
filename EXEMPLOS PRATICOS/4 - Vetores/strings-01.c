#include <stdio.h>

// string são basicamente vetores de caracteres

int main()
{
    // declara uma string com 100 caracteres
    char Nome1[100];
    char Nome2[100];
    char Nome3[100];

    // existem varias maneiras de ler strings em C
    // vou apresentar 3
    // lendo como um vetor, caracter por caracter

    /*

    for (int i = 0; i < 100; i++)
        scanf("%c", &Nome1[i]);

        Esse método é considerado ruim, porém é possível
    */

    // podemos usar %s para ler strings, porém não lê espaços
    scanf("%s", Nome2); // nesse método não é necessário o & para leitura

    getchar(); // limpa o buffer

    // podemos usar a função fgets() nela é possivel ler Strings com espaços
    fgets(Nome3, 100, stdin);

    /*
     para impressão podemos usar loops tbm, não é o melhor, os outros dois funcionam bem melhro para isso

    for (int i = 0; i < 100; i++)
        printf("%c", Nome1[i]);

    */

    // o Outro método é usando o %s
    printf("Scanf leu: %s\n", Nome2);
    printf("fgets leu: %s", Nome3);

    return 0;
}
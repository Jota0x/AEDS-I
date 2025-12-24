#include <stdio.h>

// vetores são estruturas de dados que guardam mais de uma informação do mesmo tipo

int main()
{
    int Numeros[10]; // declaração do vetor, armazena 10 numeros inteiros

    // usamos estruturas de repetição para ler e imprimir vetores
    for (int i = 0; i < 10; i++)
        // todo vetor começa sua contagem do 0, ou seja, o primeiro elemento está no Numeros[0]
        scanf("%d", &Numeros[i]);

    // loop para imprimir valores do vetor
    for (int i = 0; i < 10; i++)
        printf("%d", Numeros[i]);

    return 0;
}

#include <stdio.h>
#include <time.h>

// matrizes são estruturas de dados bidimensionais que armazenam varias informações do mesmo tipo, assim como os vetores
int main()
{
    // inicia o gerador de numeros aleatórios
    srand(time(NULL));

    // declara uma matriz de 5 linhas e 5 colunas
    int Matriz[5][5];

    // para a leitura de matriz usamos loops aninhados, ou seja, usamos um for dentro de outro for
    // nesse caso o primeiro for trata as linhas, o segundo as colunas, mas existem casos que podemos mudar essa ordem
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            Matriz[i][j] = rand() % 100;

    // loop para imprassão
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%02d ", Matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
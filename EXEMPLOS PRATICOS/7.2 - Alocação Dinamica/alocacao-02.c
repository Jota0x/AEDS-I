#include <stdio.h>
#include <stdlib.h>
#include <time.h> // biblioteca para o uso de rand

// vamos ver nesse código como a alocação dinamica funciona com matrizes
int main()
{
    // inicializa o gerador de numeros aleatorios
    srand(time(NULL));

    int *matriz;

    int linhas, colunas;

    printf("Digite o numero de linhas desejada: ");
    scanf("%d", &linhas);
    printf("\nDigite o numero de colunas desejada: ");
    scanf("%d", &colunas);

    // aloca memoria necessaria
    matriz = (int *)malloc(linhas * colunas * sizeof(int));

    // loop para preencher matriz
    for (int i = 0; i < linhas; i++)
        for (int j = 0; j < colunas; j++)
            matriz[i * colunas + j] = rand() % 100; // uso do rand para preencher a matriz com numeros aleatórios

    // loop para impressão
    for (int i = 0; i < linhas; i++)
    {

        for (int j = 0; j < colunas; j++)
        {
            // uso do %3 apenas para formatação
            printf("%3d ", matriz[i * colunas + j]);
        }
        prinf("\n");
    }

    // libera a memoria alocada pela matriz
    free(matriz);

    return 0;
}
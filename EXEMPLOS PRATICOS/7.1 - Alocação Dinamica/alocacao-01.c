#include <stdio.h>
#include <stdlib.h> //biblioteca necessaria para o uso de malloc e free

// usamos alocação dinâmica quando não se sabe o tamanho de vetores e matrizes
int main()
{

    // necessario o uso de ponteiro
    int *vetor;
    // tamanho do vetor
    int tamanho;

    printf("Digite o tamanho desejado: ");
    scanf("%d", &tamanho);

    // essa linha pede ao computador para armazenar espaço  x elementos do tipo int
    vetor = (int *)malloc(tamanho * (sizeof(int)));

    // loop para leitura
    for (int i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);

    // loop para impressão
    for (int i = 0; i < tamanho; i++)
        printf("%d ", vetor[i]);

    // quando usamos alocação dinamica as estrutras precisam ser encerradas a mão
    // o comando free libera a memória alocada
    free(vetor);

    return 0;
}
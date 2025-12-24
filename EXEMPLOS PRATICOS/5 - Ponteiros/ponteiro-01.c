#include <stdio.h>

// ponteiros são variáveis que armazenam o endereço de memória de outra variável

int main()
{
    int N;

    int *ptrN = &N;

    scanf("%d", &N);

    printf(" Valor de N: %d \n", N);
    printf(" Valor de N via ponteiro: %d \n", *ptrN);
    printf(" Valor de prtN: %d \n", ptrN);
    printf(" Valor do endereco de memoria de N: %d", &N);

    return 0;
} // end main

/*
    Imagine um prédio de apartamentos (memória). Uma variável é um apartamento com um número (endereço) e um morador (dado).
    Um ponteiro é um cartão que tem o número de um apartamento (endereço) e permite que você abra e acesse o que está lá dentro

    

*/
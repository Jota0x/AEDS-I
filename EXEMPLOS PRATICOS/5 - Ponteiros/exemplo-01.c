#include <stdio.h>

int main()
{
    int saldo = 100;

    // criarmos um ponteiro que aponta para o endereço saldo
    int *acessoBanco = &saldo;

    // imprimimos o valor do saldo
    printf("Saldo inicial: %d\n", saldo);

    // * manda o computador modificar o valor dentro desse endereço de memória, que seria o valor do saldo
    *acessoBanco = 5000;

    printf("Saldo final: %d\n", saldo);

    // perceba, mudamos o valor de saldo sem precisar dizer saldo = 5000

    return 0;
}
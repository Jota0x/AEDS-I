#include <stdio.h>

// Do-while é uma estrutura de repetição que possui um teste no final, ou seja, executa o bloco de código uma vez antes do teste
int main()
{

    // vamos usar a mesma lógica dos outros
    int numero;

    printf("Digite um numero (0 - 9)");
    scanf("%d", &numero);

    do
    {
        printf("%d ", numero);
        numero++;

    } while (numero <= 10);

    // nesse caso o codigo sera executando sempre 1 vez, mas como a condição é <= 10 caso seja digitado 100, ele será impresso apenas 1 vez
    // no caso de numero menores que 10, sera impresso até 10, como nos outros casos

    return 0;
}

/*
    Do-while é usado geralmente em menu de opções, onde o usuário poderá fazer mais de uma opção antes do programa ser encerrado
    Dica: tente implementar a calculadora feita anteriormente com o Do-while para você visualizar mehor o funcionamento do código

*/
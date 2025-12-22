#include <stdio.h>

// While é parecido com o for, porém é usado quando não se sabe o número de repetições e possui o teste no início
int main()
{
    // vamos imprimir numeros até 10, mas dessa vez vamos pedir para o usuário digitar um número
    int numero;

    printf("Digite um numero (0 - 9): ");
    scanf("%d", &numero);

    if (numero <= 10)
        // while(condição)
        while (numero <= 10)
        {
            printf("%d ", numero);
            numero++; // usado para incrementar +1 a variavel, necessário em While para o loop não ficar infinito
        }
    else
        printf("Digite um numero menor que 10!");

    return 0;
}

// nesse código sempre sera impresso na tela até o 10
// se o usuário digitar 7 sera impresso 7 8 9 10 na tela,
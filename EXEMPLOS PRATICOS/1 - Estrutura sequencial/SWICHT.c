#include <stdio.h>

// Estrutura sequencial SWITCH
int main()
{

    // Declaração de variaveis
    int opcao;                   // usado para escolher a operação, poderia ser char e usarmos '+' para soma e etc...
    float N1, N2, resultado = 0; // resultado iniciado com 0 para não guardar lixo

    printf(" --- CALCULADORA --- \n");
    printf("1 - soma\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    printf("0 - sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite dois numeros para soma: ");
        scanf("%f%f"); // le dois reais para calculo

        resultado = N1 + N2;

        printf("\nSoma: %.2f", resultado);

        break; // usado para impedir que o restante do codigo seja executado
    case 2:
        printf("Digite dois numeros para subtraçao: ");
        scanf("%f%f", &N1, &N2);

        resultado = N1 - N2;

        printf("Subtracao: %.2f", resultado);

        break;
    case 3:
        printf("Digite dois numeros para multiplicacao: ");
        scanf("%f%f", &N1, &N2);

        resultado = N1 * N2;

        printf("\nMultiplicacao: %.2f", resultado);

        break;
    case 4:
        printf("Digite dois numeros para divisao: ");
        scanf("%f%f", &N1, &N2);

        if (N2 == 0)
            printf("Divisao por 0 invalida!");
        else
        {
            resultado = N1 / N2;
            printf("\nDivisao: %.2f", resultado);
        }

        break;
    case 0:
        break;

    default: // entra caso nenhuma das opcao anteriores foi acionada
        printf("Opcao invalida!");
        break;
    }

    return 0;
}
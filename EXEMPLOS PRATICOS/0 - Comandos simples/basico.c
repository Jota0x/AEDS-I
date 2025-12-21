// biblioteca padrão, habilita os comandos de entrada(leitura) e saída(impressão) de dados
#include <stdio.h>

// função principal do programa
int main()
{
    // declaração de variaveis TIPO nomeVariável
    // declaração de caracteres básicos
    int inteiro;
    float real;
    char caracter;

    // o comando printf é usado para imprimir na tela
    // o comando scanf é usado para leitura de dados a partir do teclado
    printf("DIGITE UM NUMERO INTEIRO: ");
    scanf("%d", &inteiro); // %d usado para leitura de numero inteiro
    printf("DIGITE UM NUMERO REAL: ");
    scanf("%f", &real); // %f usado para leitura de numero real
    printf("DIGITE UM CARACTER: ");
    scanf(" %c", &caracter); // %c usado para leiura de caracter, há um espaço antes para impedir a leitura do ENTER, que é caracter

    // imprime oque foi digitado a cima
    printf("\n ---- Dados recebidos ---- \n"); // \n é usado para formatação, pula uma linha
    printf("NUMERO INTEIRO: %d NUMERO REAL: %.2f CARACTER: %c \n", inteiro, real, caracter);

    // Cada tipo possui um tamanho específico de bytes, o operador sizeof() retorna esse tamanho.
    printf("\n TAMANHO EM BYTES \n");
    printf("Inteiro: %lu bytes \n", sizeof(int));
    printf("Real: %lu bytes \n", sizeof(float));
    printf("Caracter: %lu bytes \n", sizeof(char));

    return 0; // indica que o programa foi finalizado com sucesso

} // fim da main
/*
 ==============================================================================
                            TABELA DE REFERÊNCIA
 ==============================================================================

 | TIPO      | O QUE ARMAZENA      | FORMATO SCANF | FORMATO PRINTF | BYTES*  |
 |-----------|---------------------|---------------|----------------|---------|
 | int       | Números inteiros    | %d            | %d             | 4 bytes |
 | float     | Números Reais       | %f            | %f ou %.2f     | 4 bytes |
 | char      | 1 Letra/Símbolo     | %c            | %c             | 1 byte  |

 * O tamanho em bytes pode variar dependendo da arquitetura do processador (32/64 bits),
   mas esses são os valores padrão na maioria dos PCs modernos.

 ==============================================================================
*/
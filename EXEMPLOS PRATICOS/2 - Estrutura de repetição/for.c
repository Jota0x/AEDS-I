#include <stdio.h>

// Estruturas de repetição são usadas quando é necessário fazer uma mesma ação repetidas vezes
int main()
{
    // Vamos começar pelo for()
    // usado quando se sabe o número de vezes que o laço vai se repetir
    // esse loop tem a função de imprimir numeros de 0 a 10
    for (int i = 0; i <= 10; i++)
        printf("%d ", i);

    return 0;
}

// for (inicialização; condição para CONTINUAR; incremento)
// no código acima iniciamos a variável como 0 e vamos até ela ser menor ou igual a 10, i++ é usado para incrementar +1 a variável i para a contagem dos loops
/*
    Outros Exemplos:

    for(int i = 0; i <= 10; i += 2) pula de 2 em 2

    for(int i = 10; i >= 0; i--) decrementa de i

    Em muitos exercícios será necessário realizar essas mudanças para a resolução de problemas, então fique atento


*/
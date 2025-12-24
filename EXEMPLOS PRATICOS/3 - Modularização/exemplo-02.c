#include <stdio.h>

// agora vamos fazer um código que calcula o quadrado de um número
// nele é necessário enviar uma informação para o cálculo

// essa função é int pq ela retorna um inteiro para a main, e é necessário passar parâmetros para a função
int quadrado(int n);

int main()
{
    int numero;

    scanf("%d", &numero);

    // é necessário usar o print pq a função apenas retorna um inteiro para a main, não imprime na tela
    // vc tbm pode criar uma variável e colocar o valor retornado da função desse modo: int resultado = quadrado(numero);
    printf("%d", quadrado(numero));

    return 0;
}

// a função recebe um inteiro da main calcula e retorna para a main o calculo nele presente
int quadrado(int n)
{
    // retorna um inteiro
    return n * n;
}

// Os exemplos são simples mas tem o objetivo de ilustrar como funciona, desse modo vc será capaz de aplicar em outros problemas
// todo método, ou função tem o objetivo de fazer apenas 1 coisa, isso facilita manutenção e escalabilidade
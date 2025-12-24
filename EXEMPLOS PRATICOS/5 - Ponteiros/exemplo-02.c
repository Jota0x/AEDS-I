#include <stdio.h>

// A função recebe: "Endereço de x" e "Endereço de y"
// int *x  significa: "x" é um ponteiro que guarda um endereço
void troca(int *x, int *y);

int main()
{
    int x = 10;
    int y = 20;

    printf("Antes: x = %d, y = %d\n", x, y);

    // Enviamos como parametro para a função os endereços de memória de x e y
    troca(&x, &y);

    printf("Depois: x = %d, y = %d", x, y);

    return 0;
}

void troca(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
/*
    Vou tentar ilustar para tentar deixar mais claro oque aconteceu

    [ x ]---> [ Casa 100 (x) ]         [ temp ]
       (End:100)    Valor: 10    ----->   Valor: 10

    [ y ]---> [ Casa 200 (y) ]         [ x ]---> [ Casa 100 (x) ]
       (End:200)    Valor: 20    ----->   (End:100)    Valor: 20 (Era 10)

    [ temp ]                           [ y ]---> [ Casa 200 (y) ]
       Valor: 10    ------------------>   (End:200)    Valor: 10 (Era 20)

*/
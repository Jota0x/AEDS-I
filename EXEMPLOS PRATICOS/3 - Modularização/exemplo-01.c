#include <stdio.h>

// modularização se resume em dividir o problema em tarefas menores, nesse código vamos apenas digitar hello world com um método

// protótipo da função
void inicia();

int main()
{
    inicia();

    return 0;
}

// esse pedeço de código pode ser escrito em cima da main, pessoalmente prefiro fazer dessa forma, porém dessa maneira será necessário um protótipo da função acima da main
// a função é void pq n retorna nada para a main
// não recebe parametros pq sua única função é imprimir na tela, não precisa de mais informações
void inicia()
{
    printf("Hello world!");
}
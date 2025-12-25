#include <stdio.h>

// Nesse tópico vamos aprender a manipular arquivos, eles são importante para quando é necessário salvar no HD
// informações que não podem ser perdidas quando o programa for encerrado

int main()
{
    // declara arquivo do TIPO file
    FILE *arquivo;

    int idade;
    float altura;

    // cria caso não exista ou abre caso exista arquivo com o nome teste.txt
    // usamos "w" para escrita de arquivos, "r" para leitura e "a" para
    arquivo = fopen("teste.txt", "w");

    // verifica se arquivo foi aberto corretamente
    if (arquivo == NULL)
        printf("ERRO AO ABRIR ARQUIVO");
    else
    {

        printf("Digite idade: ");
        scanf("%d", &idade);
        printf("\nDigite idade: ");
        scanf("%f", &altura);

        // comando fprintf escreve em arquivo
        fprintf(arquivo, "%d\n", idade);
        fprintf(arquivo, "%.2f", altura);

        // fecha arquivo
        fclose(arquivo);
    }

    // abrimos arquivo agora para leitura
    arquivo = fopen("teste.txt", "r");

    if (arquivo == NULL)
        printf("ERRO AO ABRIR ARQUIVO");
    else
    {
        // le variaveis do arquivo
        fscanf(arquivo, "%d%f", &idade, &altura);

        printf("Idade carregada: %d\n", idade);
        printf("Altura carregada: %.2f", altura);

        // fecha arquivo
        fclose(arquivo);
    }

    return 0;
}
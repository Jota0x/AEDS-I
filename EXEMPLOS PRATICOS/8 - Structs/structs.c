#include <stdio.h>

// Registros ou structs são tipos de dados definidos pelo programador, nele organizamos dados heterogêneos em um unico TIPO
// structs precisam ser definidos antes da main ou em arquivos .h

// definimos um tipo Aluno q possui um nome, uma idade e uma nota
typedef struct
{
    char nome[100];
    int idade;
    float nota;

} Aluno;

int main()
{
    // criamos uma variavel aluno do Tipo Aluno
    Aluno aluno;

    // para ter acesso a dados de structs precisamos usar . ou -> quando ponteiro
    printf(" --- FICHA ALUNO --- \n");
    printf("Nome: ");
    fgets(aluno.nome, 100, stdin);
    printf("\nIdade: ");
    scanf("%d", &aluno.idade);
    printf("\nNota: ");
    scanf("%f", &aluno.nota);

    // imprime informações de aluno
    printf(" \n--- FICHA PREENCHIDA ---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f", aluno.nota);

    return 0;
}
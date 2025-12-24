#include <stdio.h>

/*
 Esse é um tópico mais complexo, eu particularmente acho muito abstrato, é necessário muito treino para pegar esse conceito
 vamos começar com uma analogia

 Imagine que você tem uma gaveta trancada e precisa encontrar a chave para abri-la. Ao abrir a gaveta, você encontra várias caixas menores
 e a chave pode estar em qualquer uma delas.

    O problema: encontrar a chave

    O passo recursivo(que vai se repetir): Você abre uma das caixas e percebe que ela contém outras caixas menores.
 O processo para procurar a chave dentro dessa caixa menor é exatamente o mesmo que o processo para a gaveta original.
Você repete a ação de "procurar a chave" dentro da nova (e menor) caixa. A função chama a si mesma.

    O método de parada(caso base): Esse processo de abrir caixas e encontrar mais caixas dentro delas não pode continuar para sempre, ou você nunca resolverá o problema.
 A condição de parada é quando você finalmente abre uma caixa que não contém mais caixas, mas sim a chave.

    O retorno:  Uma vez que você encontra a chave na menor caixa (o caso base é resolvido), você começa a "voltar" pelas caixas que abriu anteriormente. Cada caixa "fechada" (chamada de função anterior) recebe o resultado (a chave encontrada)
 e usa-o para completar sua própria tarefa até que o problema original, a gaveta inicial, seja finalmente resolvido

    Vou tentar ilustrar isso com um código que calcula fatorial de um numero.
*/

int fatorial(int n); // prototipo da função

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", fatorial(n));

    return 0;
} // end main

int fatorial(int n)
{
    // caso base, retorna valor de n caso n seja 1
    if (n == 1)
        return n;
    // método recursivo
    else
        return n * fatorial(n - 1);
}

/*

    Vou tentar ilustrar aqui como seria se o usuário digitasse o número 3, o retorno seria 6, pois 3! = 6

    --- FASE 1: A IDA (Empilhando chamadas) ---
    1. A main chama fatorial(3).
       - n = 3. É igual a 1? Não.
       - O código tenta calcular: return 3 * fatorial(2);
       - PAUSA! O código não sabe quanto é fatorial(2) ainda. Ele "congela" o 3 e chama a função de novo.

    2. Chamada de fatorial(2).
       - n = 2. É igual a 1? Não.
       - O código tenta calcular: return 2 * fatorial(1);
       - PAUSA! O código não sabe quanto é fatorial(1) ainda. Ele "congela" o 2 e chama a função de novo.

    3. Chamada de fatorial(1).
       - n = 1. É igual a 1? SIM! (Caso Base).
       - O código retorna 1.

    --- FASE 2: A VOLTA (Desempilhando e resolvendo) ---
    4. Voltamos para a chamada do passo 2 (onde n era 2).
       - Ela estava esperando o resultado de fatorial(1). Agora ela sabe que é 1.
       - Cálculo: 2 * 1 = 2.
       - Retorna 2 para quem chamou (o passo 1).

    5. Voltamos para a chamada do passo 1 (onde n era 3).
       - Ela estava esperando o resultado de fatorial(2). Agora ela sabe que é 2.
       - Cálculo: 3 * 2 = 6.
       - Retorna 6 para a main.

    Resultado final impresso na tela: 6

    Esse tópico eu acho um dos mais complexos dessa matéria, por isso tente fazer o máximo de exercícios que conseguir

*/
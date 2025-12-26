#include <iostream> // biblioteca basica de c++
using namespace std;

/*
    Agora vamos começar com C++
    Nessa linguagem vamos trabalhar com POO(Programação Orientada a Objetos)
    Vamos começar com os 4 pilares da POO


    Abstração: É a capacidade de focar no que o objeto faz, e não em como ele faz. É esconder a complexidade do sistema e mostrar apenas o necessário (a interface).

    Encapsulamento: É a proteção dos dados. Em vez de deixar variáveis soltas (como no struct do C), nós as trancamos (private) e só permitimos acesso via métodos autorizados (public).

    Herança: Permite que uma classe (Filha) herde características e comportamentos de outra classe (Mãe), evitando repetição de código.

    Polimorfismo: A capacidade de um mesmo método agir de formas diferentes dependendo do objeto que o chama (ex: o método falar() faz um Cachorro latir e um Gato miar).

    Nesse código vamos focar nos 2 primeiros pilares, Abstração e Encapsulamento

*/

class Aluno
{
    // usamos o private para impedir que as variáveis assumam valores inválidos
    // desse modo somente a classe tem acesso a essas variáveis
private:
    string nome;
    int idade;
    float altura;

public:
    // Construtor função iniciada para criar um objeto
    Aluno() {}                                                        // construtor default
    Aluno(string n, int i, float a) : nome(n), idade(i), altura(a) {} // costruto com parametros

    // Métodos setters, métodos usados para "mudar" o valor da ariavel
    void setNome(string n)
    {
        nome = n;
    }

    void setIdade(int i)
    {
        idade = i;
    }

    void setAltura(float a)
    {
        altura = a;
    }

    // Métodos getters, métodos usados para resgatar o valor provado
    string getNome() { return nome; }
    int getIdade() { return idade; }
    float getAltura() { return altura; }
};

int main()
{
    // Podemos definir objetos a partir da main
    Aluno a1("teste", 10, 160);
    Aluno a2;

    string nome;
    int idade;
    float altura;

    // Podemos pedir do teclado tbm, para isso usamos os metodos setters
    // cout é o printf em C++
    cout << "Digite Nome: ";
    // getline usado para leitura de strings
    getline(cin, nome);
    cout << "\nDigite Idade: ";
    // cin é o scanf em C++
    cin >> idade;
    cout << "\nDigite Altura: ";
    cin >> altura;

    // modifica os valores do objeto
    a2.setNome(nome);
    a2.setIdade(idade);
    a2.setAltura(altura);

    // imprime as informações dos obejetos
    cout << "\n Impressao de Alunos \n";
    cout << "Nome A1: " << a1.getNome() << " A2: " << a2.getNome() << endl;
    cout << "Idade A1: " << a1.getIdade() << " A2: " << a2.getIdade() << endl;
    cout << "Altura A1: " << a1.getAltura() << " A2: " << a2.getAltura() << endl;

    return 0;
}

// As classes são moldes que os objetos usam para serem construidos 
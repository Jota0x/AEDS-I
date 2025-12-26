#include <iostream>
using namespace std;

/*
    Agora vamos trabalhar com herança e polimorfismo

    Herança: Capacidade de criar uma nova classe baseada em uma que já existe.

    Polimorfismo: Capacidade de invocar o mesmo método, mas obter comportamentos diferentes dependendo do objeto.

*/

class Animal
{
private:
    string nome;

public:
    // Construtores
    Animal() {}
    Animal(string n) : nome(n) {}
    // destrutor, precisa ser virtual para destruir os objetos da classe mae e da classe filho
    virtual ~Animal() {};

    // metodos set
    void setNome(string n) { nome = n; }

    // metodo get
    string getNome() { return nome; }

    // outros métodos
    // usamos virtual para usarmos a função em outras classes
    virtual void som()
    {
        cout << "Animal emitindo som" << endl;
    }
};

// classe filha
class Cachorro : public Animal
{

public:
    // construtores para a classe
    Cachorro() {}
    Cachorro(string n) : Animal(n) {}

    // override usado para sobrescrever a função da calsse mãe
    void som() override
    {
        cout << "AU AU" << endl;
    }
};

int main()
{

    Animal *a1 = new Animal("teste");
    Animal *c1 = new Cachorro("teste");

    // imprime oq cada emite de som
    a1->som();
    c1->som();

    // destrutores
    delete (a1);
    delete (c1);

    return 0;
}
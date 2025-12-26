#include <iostream>
using namespace std;

// Nesse código vamos usar o conceito de classe abstrata pura
// Uma classe abstrata pura não pode ser instaciada, ou seja, não se pode criar obejetos com ela
class Forma
{
public:
    // funções virtuais puras são igualadas a 0
    virtual float area() = 0;
    virtual float perimetro() = 0;
    // destrutor virtual
    virtual ~Forma() {}
};

// classe filha
class Retangulo : public Forma
{
private:
    float lado;
    float altura;

public:
    // construtores para a classe
    Retangulo() {}
    Retangulo(float l, float a) : lado(l), altura(a) {}

    // métodos
    float area() override
    {
        return lado * altura;
    }

    float perimetro() override
    {
        return (2 * lado) + (2 * altura);
    }
};

class Circulo : public Forma
{
private:
    float raio;

public:
    // construtores da classe
    Circulo() {}
    Circulo(float r) : raio(r) {}

    // métodos
    float area() override
    {
        return 3.14 * raio * raio;
    }

    float perimetro() override
    {
        return 2 * 3.14 * raio;
    }
};

int main()
{
    Forma *formas[2];

    formas[0] = new Retangulo(10, 10);
    formas[1] = new Circulo(10);

    cout << " ---- AREA ---- " << endl;
    cout << "Retangulo: " << formas[0]->area() << endl;
    cout << "Ciculo: " << formas[1]->area() << endl;

    cout << " ---- PERIMETRO ---- " << endl;
    cout << "Retangulo: " << formas[0]->perimetro() << endl;
    cout << "Circulo: " << formas[1]->perimetro() << endl;

    // limpeza
    for (int i = 0; i < 2; i++)
        delete (formas[i]);

    return 0;
}
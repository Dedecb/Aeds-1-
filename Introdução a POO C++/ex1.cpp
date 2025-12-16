//Métodos com Retorno de Valor
//Descrição: Crie uma classe Retangulo, utilizando C++, com os atributos largura e altura. Adicione um método calcularArea que retorne a área do retângulo.
//Escreva um programa que crie um objeto dessa classe, leia valores para os atributos e exiba-os através do método criado.

#include <iostream>
using namespace std;

class Retangulo {
public:
    int largura;
    int altura;

    int calcularArea() {
        return largura * altura;
    }
};

int main() {
    Retangulo r;

    cin >> r.largura;
    cin >> r.altura;

    cout << r.calcularArea();

    return 0;
}


//Métodos com Parâmetros
//Descrição: Crie uma classe Circulo, utiliando C++, com o atributo raio. Adicione um método lerRaio para ler o valor do raio, e outro calcularCircunferencia que receba
//o valor de π (pi) como parâmetro e retorne a circunferência do círculo. Crie um método na classe para imprimir as informações da classe. Escreva um programa que crie
//um objeto dessa classe, atribua valor ao atributo e exiba-os através do método criado.
//Utilize o valor de pi : double pi = 3.1416;

#include <iostream>
#include <iomanip>
using namespace std;

class Circulo {
public:
    double raio;

    void lerRaio() {
        cin >> raio;
    }

    double calcularCircunferencia(double pi) {
        return 2 * pi * raio;
    }

    void imprimir(double pi) {
        cout << fixed << setprecision(2);
        cout << "Raio:" << raio << endl;
        cout << "Circunferencia do circulo: "
             << calcularCircunferencia(pi);
    }
};

int main() {
    Circulo c;
    double pi = 3.1416;

    c.lerRaio();
    c.imprimir(pi);

    return 0;
}

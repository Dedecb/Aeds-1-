#include <iostream>
#include <iomanip>
using namespace std;

class Retangulo {
public:
    double largura;
    double altura;

    void ler() {
        cin >> largura;
        cin >> altura;
    }

    double calcularArea() {
        return largura * altura;
    }

    void imprimir() {
        cout << fixed << setprecision(2);
        cout << "Largura: " << largura << ", Altura: " << altura << endl;
        cout << "Area do retangulo: " << calcularArea();
    }
};

int main() {
    Retangulo r;
    r.ler();
    r.imprimir();
    return 0;
}


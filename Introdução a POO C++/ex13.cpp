#include <iostream>
#include <string>

using namespace std;

class Carro {
private:
    string marca;
    int ano;

public:
    // Construtor
    Carro(string m, int a) {
        marca = m;
        ano = a;
    }

    // Getters
    string getMarca() {
        return marca;
    }

    int getAno() {
        return ano;
    }

    // Setters
    void setMarca(string m) {
        marca = m;
    }

    void setAno(int a) {
        ano = a;
    }
};

int main() {
    string marcaInicial, novaMarca;
    int anoInicial;

    getline(cin, marcaInicial);
    cin >> anoInicial;

    cin.ignore();

    getline(cin, novaMarca);

    Carro c(marcaInicial, anoInicial);

    cout << "Detalhes iniciais do carro:" << endl;
    cout << "Marca: " << c.getMarca() << endl;
    cout << "Ano: " << c.getAno() << endl;

    c.setMarca(novaMarca);

    c.setAno(c.getAno() + 1);


    cout << "Detalhes modificados do carro:" << endl;
    cout << "Marca: " << c.getMarca() << endl;
    cout << "Ano: " << c.getAno() << endl;

    return 0;
}

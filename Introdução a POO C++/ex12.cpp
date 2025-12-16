#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

class Produto {
private:
    string nome;
    float preco;

public:
    
    Produto(string n, float p) {
        nome = n;
        preco = p;
    }

    
    string getNome() {
        return nome;
    }

    float getPreco() {
        return preco;
    }

    
    void setNome(string n) {
        nome = n;
    }

    void setPreco(float p) {
        preco = p;
    }
};

int main() {
    string nomeInicial, novoNome;
    float precoInicial;

    
    getline(cin, nomeInicial);
    cin >> precoInicial;

    cin.ignore();

    getline(cin, novoNome);

    Produto p(nomeInicial, precoInicial);

    cout << fixed << setprecision(2);

    cout << "Detalhes iniciais do produto:" << endl;
    cout << "Nome: " << p.getNome() << endl;
    cout << "Preco: " << p.getPreco() << endl;

    p.setNome(novoNome);

    float novoPreco = p.getPreco() * 1.10; 
    p.setPreco(novoPreco);

    cout << "Detalhes modificados do produto:" << endl;
    cout << "Nome: " << p.getNome() << endl;
    cout << "Preco: " << p.getPreco() << endl;

    return 0;
}

//Construtores e Destrutores
//Crie uma classe chamada Produto com os atributos nome (string) e preco (float). Implemente um construtor que inicialize esses atributos com
//valores lidos e um construtor que aceite parametros para iniciar os atributos. Crie 2 objetos utilizando cada um construtor diferente. um
//destrutor que imprima uma mensagem quando um objeto � destru�do.

#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

class Produto {
private:
    string nome;
    float preco;

public:
    Produto() {
        getline(cin, nome);
        cin >> preco;

        cin.ignore(1000, '\n');

        cout << fixed << setprecision(2);
        cout << "Produto criado: " << nome << endl;
        cout << "Preco: " << preco << endl;
    }

    Produto(string n, float p) {
        nome = n;
        preco = p;

        cout << fixed << setprecision(2);
        cout << "Produto criado: " << nome << endl;
        cout << "Preco: " << preco << endl;
    }

    ~Produto() {
        cout << "Produto destruido: " << nome << endl;
    }
};

int main() {

    Produto p1;

    string nomeTemp;
    float precoTemp;

    getline(cin, nomeTemp); 
    cin >> precoTemp;

    Produto p2(nomeTemp, precoTemp);

    return 0;

//Criar uma Classe Simples
//Crie uma classe Livro, utilizando C++, que tenha os atributos titulo e autor. Escreva um programa que crie um objeto dessa classe, leia valores para os atributos e exiba-os.

#include <iostream>
#include <string>
using namespace std;

class Livro {
public:
    string titulo;
    string autor;
};

int main() {
    Livro l;

    getline(cin, l.titulo);
    getline(cin, l.autor);

    cout << "Titulo: " << l.titulo << endl;
    cout << "Autor: " << l.autor;

    return 0;
}

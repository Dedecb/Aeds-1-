#include <iostream>
#include <string>
#include <limits> 

using namespace std;

class Livro {
private:
    string titulo;
    int numeroPaginas;

public:
    Livro(string t, int p) {
        titulo = t;
        numeroPaginas = p;
    }

    string getTitulo() { return titulo; }
    void setTitulo(string t) { titulo = t; }
    int getNumeroPaginas() { return numeroPaginas; }
    void setNumeroPaginas(int p) { numeroPaginas = p; }
};

int main() {
    string tituloInput, subtituloInput;
    int paginasInput;


    getline(cin, tituloInput);
    cin >> paginasInput;


    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    getline(cin, subtituloInput);


    Livro livro(tituloInput, paginasInput);

    cout << "Detalhes iniciais do livro:" << endl;
    cout << "Titulo: " << livro.getTitulo() << endl;
    cout << "Numero de Paginas: " << livro.getNumeroPaginas() << endl;

 
    string novoTitulo = livro.getTitulo() + ": " + subtituloInput;
    livro.setTitulo(novoTitulo);

    int novasPaginas = livro.getNumeroPaginas() + 50;
    livro.setNumeroPaginas(novasPaginas);


    cout << "Detalhes modificados do livro:" << endl;
    cout << "Titulo: " << livro.getTitulo() << endl;
    cout << "Numero de Paginas: " << livro.getNumeroPaginas() << endl;

    return 0;
}

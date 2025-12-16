//Construtores e Destrutores Crie uma classe chamada Produto com os atributos nome (string) e preco (float). Implemente um construtor que inicialize esses atributos
//com valores lidos e um destrutor que imprima uma mensagem quando um objeto � destru�do.
//Obs:manipula�ao de strings:
//exemplo:
 //#include <algorithm> // Para std::remove
 //string nome;
 // Limpar quaisquer caracteres pendentes no buffer de entrada
  //if (cin.peek() == '\n') cin.ignore();
 //getline(std::cin, nome);
 // Remover caracteres de nova linha e retorno de carro, se presentes
//nome.erase(std::remove(nome.begin(), nome.end(), '\r'), nome.end());
//nome.erase(std::remove(nome.begin(), nome.end(), '\r'), nome.end());

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Produto {
public:
    string nome;
    float preco;

    Produto() {
        if (cin.peek() == '\n') cin.ignore();
        getline(cin, nome);

        nome.erase(remove(nome.begin(), nome.end(), '\r'), nome.end());
        nome.erase(remove(nome.begin(), nome.end(), '\n'), nome.end());

        cin >> preco;

        cout << "Produto criado: " << nome << " - Preco: "
             << fixed << preco << endl;
    }

    ~Produto() {
        cout << "Produto destruido: " << nome << endl;
    }
};

int main() {
    Produto p;
    return 0;
}

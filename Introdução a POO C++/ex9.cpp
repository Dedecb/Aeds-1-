//Construtores e Destrutores
//Crie uma classe chamada Produto com os atributos nome (string) e preco (float). Implemente um construtor que inicialize esses atributos com valores lidos
//e um construtor que aceite parametros para iniciar os atributos. Crie 2 objetos utilizando cada um construtor diferente. Um destrutor que imprima uma mensagem quando um objeto � destru�do.
//Adicione um atributo est�tico � classe Produto para contar quantos objetos foram criados.
//Atualize o construtor e o destrutor para incrementar e decrementar esse contador, respectivamente, e exiba o valor atual do contador
//Implemente um construtor de c�pia para a classe Produto que copie os atributos de um objeto para outro.
// Construtor de c�pia
//Produto(const Produto& outro)
//Demonstre seu uso no programa principal.
//Exemplo:
//Produto p3 = p1; // construtor de c�pia;

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Produto {
private:
    string nome;
    float preco;
    static int contador;

public:
    Produto() {
        getline(cin, nome);
        cin >> preco;
        cin.ignore(1000, '\n');

        contador++; 

        cout << fixed << setprecision(2);
        cout << "Produto criado: " << nome << endl;
        cout << "Preco: " << preco << endl;
        cout << "Total de produtos: " << contador << endl;
    }


    Produto(string n, float p) {
        nome = n;
        preco = p;

        contador++; 

        cout << fixed << setprecision(2);
        cout << "Produto criado: " << nome << endl;
        cout << "Preco: " << preco << endl;
        cout << "Total de produtos: " << contador << endl;
    }

    Produto(const Produto& outro) {

        nome = "(copia)" + outro.nome;
        preco = outro.preco;

        contador++; 

        cout << fixed << setprecision(2);
        cout << "Produto criado copia: " << nome << endl;
        cout << "Preco: " << preco << endl;
        cout << "Total de produtos: " << contador << endl;
    }

    ~Produto() {
        cout << "Produto destruido: " << nome << endl;
        contador--; 
        cout << "Total de produtos: " << contador << endl;
    }
};

int Produto::contador = 0;

int main() {

    Produto p1;

    string nomeTemp;
    float precoTemp;
    getline(cin, nomeTemp); 
    cin >> precoTemp;      

    Produto p2(nomeTemp, precoTemp);

    Produto p3 = p1;

    return 0;
}
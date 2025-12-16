//Construtores e Destrutores
//Crie uma classe chamada Produto com os atributos nome (string) e preco (float). Implemente um construtor que inicialize esses atributos com valores lidos e um construtor que aceite parametros para iniciar os atributos. Crie 2 objetos utilizando cada um construtor diferente.
//Um destrutor que imprima uma mensagem quando um objeto � destru�do.
//Adicione um atributo est�tico � classe Produto para contar quantos objetos foram criados.
//static int contador;
//Atualize o construtor e o destrutor para incrementar e decrementar esse contador, respectivamente, e exiba o valor atual do contador.
//Para iniciar o contador:
//int Produto::contador = 0;

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

        // L�gica do contador
        contador++;

        cout << fixed << setprecision(2);
        cout << "Produto criado: " << nome << endl;
        cout << "Preco: " << preco << endl;
        cout << "Total de produtos: " << contador << endl;
    }

    // --- Destrutor ---
    ~Produto() {
        cout << "Produto destruido: " << nome << endl;

        // Decrementa o contador ao destruir
        contador--;
        cout << "Total de produtos: " << contador << endl;
    }
};

// Inicializa��o do atributo est�tico (obrigat�rio fazer fora da classe)
int Produto::contador = 0;

int main() {
    // 1. Cria o primeiro objeto (usa o Construtor 1 que l� internamente)
    Produto p1;

    // 2. L� dados na main para passar para o segundo objeto
    string nomeTemp;
    float precoTemp;

    getline(cin, nomeTemp);
    cin >> precoTemp;

    // 3. Cria o segundo objeto (usa o Construtor 2 com par�metros)
    Produto p2(nomeTemp, precoTemp);

    return 0;
    // Ao sair da main, os destrutores s�o chamados automaticamente na ordem inversa:
    // Destr�i p2 -> Total cai para 1
    // Destr�i p1 -> Total cai para 0
}

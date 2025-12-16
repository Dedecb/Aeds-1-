//POO -Encapsulamento
//Implemente um programa em C++ que define uma classe Pessoa com os seguintes requisitos:
//Atributos privados:
//nome: uma string que representa o nome da pessoa.
//idade: um int que representa a idade da pessoa.
//M�todos p�blicos:
//getNome: Retorna o nome da pessoa.
//setNome: Define o nome da pessoa.
//getIdade: Retorna a idade da pessoa.
//setIdade: Define a idade da pessoa.
//Construtor:
//Um construtor que inicializa os atributos nome e idade com valores fornecidos pelo usu�rio.
//Utilize os m�todos getNome e getIdade para imprimir os valores iniciais no programa principal.
//Modifica��o dos dados:
//Solicite ao usu�rio que digite um sobrenome.
//Incremente a idade da pessoa em uma unidade.
//Utilize os m�todos setNome e setIdade para alterar o nome e a idade.
//Imprima novamente os dados da pessoa agora modificados.
//Utilize o comando using namespace std; no seu programa.

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
    string nome;
    int idade;

public:

    Pessoa(string n, int i) {
        nome = n;
        idade = i;
    }


    string getNome() {
        return nome;
    }

    int getIdade() {
        return idade;
    }

    void setNome(string n) {
        nome = n;
    }

    void setIdade(int i) {
        idade = i;
    }
};

int main() {
 
    string nomeTemp;
    int idadeTemp;


    getline(cin, nomeTemp);
    cin >> idadeTemp;

    cin.ignore(1000, '\n');


    Pessoa p(nomeTemp, idadeTemp);

    cout << "Dados iniciais da pessoa:" << endl;
    cout << "Nome: " << p.getNome() << endl;
    cout << "Idade: " << p.getIdade() << endl;

    string sobrenome;
    getline(cin, sobrenome);


    p.setNome(p.getNome() + " " + sobrenome);

    p.setIdade(p.getIdade() + 1);

    cout << "Dados modificados da pessoa:" << endl;
    cout << "Nome: " << p.getNome() << endl;
    cout << "Idade: " << p.getIdade() << endl;

    return 0;
}

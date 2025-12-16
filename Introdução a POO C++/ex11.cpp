//Encapsulamentos Valida��o de Dados no Encapsulamento de uma Conta Banc�ria
//Objetivo: Criar uma classe ContaBancaria que modele uma conta banc�ria simples, garantindo a seguran�a e integridade dos dados atrav�s de encapsulamento.
//Descri��o:
//Classe ContaBancaria:
//Deve ter um atributo privado saldo do tipo float. Um atributo privado nomeCliente do tipo string.
//Construtor:
//Um construtor que inicializa o saldo com zero e recebe o nome do cliente como par�metro.
//M�todos:
//setSaldo(float novoSaldo): Define o saldo, garantindo que n�o possa ser negativo.
//getSaldo(): Retorna o saldo atual.
//depositar(float valor): Permite adicionar dinheiro � conta, se o valor for positivo.
//sacar(float valor): Permite retirar dinheiro da conta, se o valor for positivo e n�o exceder o saldo dispon�vel.
//imprimirDados(): Imprime o nome do cliente e o saldo atual.
//Intera��o com o Usu�rio:
//O programa deve solicitar o nome do cliente na inicializa��o.
//Solicitar o n�mero de movimenta��es a serem realizadas.
//1 - depositar
//2 - sacar
//Ao final mostrar os dados da conta

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class ContaBancaria {
private:
    float saldo;
    string nomeCliente;

public:

    ContaBancaria(string nome) {
        nomeCliente = nome;
        saldo = 0;
    }

    void setSaldo(float novoSaldo) {
        if (novoSaldo >= 0) {
            saldo = novoSaldo;
        }
    }

    float getSaldo() {
        return saldo;
    }

    void depositar(float valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Depositado: " << valor << endl;
        }
    }

    void sacar(float valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            cout << "Sacado: " << valor << endl;
        } else {
            cout << "Valor de saque invalido ou saldo insuficiente!" << endl;
        }
    }

    void imprimirDados() {
        cout << "Dados da conta apos as movimentacoes:" << endl;
        cout << "Nome do Cliente: " << nomeCliente << endl;
        cout << "Saldo Atual: " << saldo << endl;
    }
};

int main() {

    string nome;
    if (cin.peek() == '\n') cin.ignore();
    getline(cin, nome);
    nome.erase(remove(nome.begin(), nome.end(), '\r'), nome.end());
    nome.erase(remove(nome.begin(), nome.end(), '\n'), nome.end());

    ContaBancaria conta(nome);

    int nMov;
    cin >> nMov;

    for (int i = 0; i < nMov; i++) {
        int opcao;
        cin >> opcao;

        if (opcao == 1) { 
            float valor;
            cin >> valor;
            if (valor > 0)
                conta.depositar(valor);
            else
                cout << "Valor invalido!" << endl;

        } else if (opcao == 2) { 
            float valor;
            cin >> valor;
            conta.sacar(valor);

        } else {
            cout << "Opcao invalida!" << endl;
        }
    }

    conta.imprimirDados();

    return 0;
}

#include <iostream>
#include <vector>
#include <iomanip> 

using namespace std;


class ContaBancaria {
protected:
    double saldo;

public:
    ContaBancaria() : saldo(0.0) {}

   
    virtual ~ContaBancaria() {}

   
    virtual void depositar(double valor) = 0;
    virtual void retirar(double valor) = 0;

    
    virtual void exibirSaldo() const {
        cout << "Saldo atual: R$ " << fixed << setprecision(2) << saldo << endl;
    }
};


class ContaCorrente : public ContaBancaria {
public:
    void depositar(double valor) override {
        if (valor > 0) {
            saldo += valor;
        }
    }

    void retirar(double valor) override {
        double valorTotal = valor + 1.00; 
        if (valor > 0 && saldo >= valorTotal) {
            saldo -= valorTotal;
        } else {
            cout << "Saldo insuficiente para saque (incluindo taxa)." << endl;
        }
    }

    void exibirSaldo() const override {
        cout << "Tipo de conta: Corrente; Saldo atual: R$ "
             << fixed << setprecision(2) << saldo << endl;
    }
};


class Poupanca : public ContaBancaria {
public:
    void depositar(double valor) override {
        if (valor > 0) {
            saldo += valor * 1.01; 
        }
    }

    void retirar(double valor) override {
        if (valor > 0 && saldo >= valor) {
            saldo -= valor;
        } else {
            cout << "Saldo insuficiente." << endl;
        }
    }

    void exibirSaldo() const override {
        cout << "Tipo de conta: Poupanca; Saldo atual: R$ "
             << fixed << setprecision(2) << saldo << endl;
    }
};


void exibirTodasContas(const vector<ContaBancaria*>& contas) {
    cout << "Saldos e tipos de todas as contas:" << endl;
    for (const auto& conta : contas) {
        conta->exibirSaldo();
    }
}


int main() {
    vector<ContaBancaria*> contas;
    int opcao;


    cout << "--- Cadastro de Contas ---" << endl;
    do {
        cout << "1. Adicionar Conta Corrente" << endl;
        cout << "2. Adicionar Poupanca" << endl;
        cout << "3. Parar de adicionar" << endl;
        cout << "Escolha: ";
        cin >> opcao;

        if (opcao == 1) {
            contas.push_back(new ContaCorrente());
            cout << "Conta Corrente adicionada." << endl;
        } else if (opcao == 2) {
            contas.push_back(new Poupanca());
            cout << "Poupanca adicionada." << endl;
        }
    } while (opcao != 3);


    int codigoConta;
    int tipoOperacao;
    double valor;

    cout << "\n--- Operacoes Bancarias ---" << endl;
    cout << "Digite o codigo da conta (1 a " << contas.size() << ") ou 0 para Sair/Exibir Tudo: " << endl;

    while (true) {
        cout << "\nCodigo da conta (ou 0 para finalizar): ";
        cin >> codigoConta;

        if (codigoConta == 0) break;


        if (codigoConta > 0 && codigoConta <= (int)contas.size()) {
            ContaBancaria* contaSelecionada = contas[codigoConta - 1];

            cout << "1. Depositar | 2. Retirar: ";
            cin >> tipoOperacao;
            cout << "Valor: ";
            cin >> valor;

            if (tipoOperacao == 1) {
                contaSelecionada->depositar(valor);
            } else if (tipoOperacao == 2) {
                contaSelecionada->retirar(valor);
            }


            contaSelecionada->exibirSaldo();
        } else {
            cout << "Codigo invalido!" << endl;
        }
    }


    cout << endl;
    exibirTodasContas(contas);

    
    for (auto& conta : contas) {
        delete conta;
    }
    contas.clear();

    return 0;
}

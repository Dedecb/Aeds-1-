#include <iostream>
#include <string>

using namespace std;


class Conta {
private:
    float saldo;

public:
    
    Conta() : saldo(0) {}

    
    void setSaldo(float s) {
        saldo = s;
    }

    
    float getSaldo() {
        return saldo;
    }

    
    virtual void depositar(float valor) {
        if (valor > 0) {
            saldo += valor;
        }
    }

   
    virtual bool sacar(float valor) {
        if (valor > 0 && saldo >= valor) {
            saldo -= valor;
            return true;
        }
        return false;
    }
};


class ContaCorrente : public Conta {
private:
    float limite;
    float limiteUtilizado;

public:
    ContaCorrente() : limite(0), limiteUtilizado(0) {}

    void setLimite(float l) {
        limite = l;
    }

    float getLimite() {
        return limite;
    }

    float getLimiteUtilizado() {
        return limiteUtilizado;
    }

    
    bool sacar(float valor) override {
        float saldoAtual = getSaldo();

        
        if (valor > 0 && saldoAtual >= valor) {
            return Conta::sacar(valor);
        }

        
        float valorFaltante = valor - saldoAtual;
        float limiteDisponivel = limite - limiteUtilizado;

        if (valor > 0 && valorFaltante <= limiteDisponivel) {
            
            if (saldoAtual > 0) {
                Conta::sacar(saldoAtual);
            }
            
            limiteUtilizado += valorFaltante;
            return true;
        }

        return false;
    }

    
    void depositar(float valor) override {
        if (valor > 0) {
            
            if (limiteUtilizado > 0) {
                if (valor >= limiteUtilizado) {
                    float sobra = valor - limiteUtilizado;
                    limiteUtilizado = 0;
                    
                    Conta::depositar(sobra);
                } else {
                    limiteUtilizado -= valor;
                }
            } else {
                
                Conta::depositar(valor);
            }
        }
    }
};

int main() {
    int nMovimentacoes;
    float valorTemp, saldoInicial, limiteTemp;
    int op;

   
    Conta conta;

   
    cin >> saldoInicial;
    conta.setSaldo(saldoInicial);

    
    cin >> nMovimentacoes;

    for (int i = 0; i < nMovimentacoes; i++) {
        cin >> op >> valorTemp;

        if (op == 1) { 
            conta.depositar(valorTemp);
            cout << "Saldo Atual:" << conta.getSaldo() << endl;
        } else if (op == 2) {
            bool sucesso = conta.sacar(valorTemp);
            if (sucesso) {
                cout << "Saldo Atual:" << conta.getSaldo() << endl;
            } else {
                cout << "Saque invalido. Saldo insuficiente ou valor invalido." << endl;
                cout << "Saldo Atual:" << conta.getSaldo() << endl;
            }
        }
    }

    
    ContaCorrente cc;

    
    cin >> saldoInicial;
    cc.setSaldo(saldoInicial);

    cin >> limiteTemp;
    cc.setLimite(limiteTemp);

    cin >> nMovimentacoes;

    for (int i = 0; i < nMovimentacoes; i++) {
        cin >> op >> valorTemp;

        if (op == 1) { 
            cc.depositar(valorTemp);
            cout << "Saldo Atual:" << cc.getSaldo()
                 << " Limite:" << cc.getLimite()
                 << " Limite utilizado:" << cc.getLimiteUtilizado() << endl;
        } else if (op == 2) { 
            bool sucesso = cc.sacar(valorTemp);
            if (!sucesso) {
                cout << "Saque invalido. Saldo insuficiente e/ou limite excedido." << endl;
            }
            
            cout << "Saldo Atual:" << cc.getSaldo()
                 << " Limite:" << cc.getLimite()
                 << " Limite utilizado:" << cc.getLimiteUtilizado() << endl;
        }
    }

    return 0;
}

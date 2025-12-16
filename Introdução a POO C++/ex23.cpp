#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Veiculo {
protected:
    int velocidade;

public:
    Veiculo() : velocidade(0) {}

    
    virtual void acelerar(int valor) = 0;
    virtual void frear(int valor) = 0;
    virtual string tipo() = 0;


    void exibirVelocidade(int indice) {
        cout << "[" << indice << "] Velocidade atual:" << velocidade << " km/h" << endl;
    }

    
    int getVelocidade() const {
        return velocidade;
    }

    
    virtual ~Veiculo() {}
};


class Carro : public Veiculo {
public:
    void acelerar(int valor) override {
        velocidade += valor;
    }

    void frear(int valor) override {
        velocidade -= valor;
        if (velocidade < 0) velocidade = 0; 
    }

    string tipo() override {
        return "Carro";
    }
};


class Bicicleta : public Veiculo {
public:
    void acelerar(int valor) override {
        velocidade += valor;
    }

    void frear(int valor) override {
        velocidade -= valor;
        if (velocidade < 0) velocidade = 0; 
    }

    string tipo() override {
        return "Bicicleta";
    }
};


void imprimirRelatorio(const vector<Veiculo*>& veiculos) {
    cout << "Velocidade atual de todos os veiculos:" << endl;
    for (size_t i = 0; i < veiculos.size(); ++i) {
        
        cout << "Veiculo: " << veiculos[i]->tipo()
             << " [" << i << "] Velocidade atual:"
             << veiculos[i]->getVelocidade() << " km/h" << endl;
    }
}


int main() {
    vector<Veiculo*> frota;
    int opcao;

    
    while (true) {
        cin >> opcao;

        if (opcao == 1) {
            frota.push_back(new Carro());
            cout << "Carro adicionado." << endl;
        } else if (opcao == 2) {
            frota.push_back(new Bicicleta());
            cout << "Bicicleta adicionada." << endl;
        } else if (opcao == 3) {
            break; 
        }
    }

    
    int indice, operacao, valor;

    while (true) {
        cin >> indice;

        
        if (indice < 0) {
            imprimirRelatorio(frota);
            break;
        }

        
        if (indice >= 0 && indice < frota.size()) {
            cin >> operacao >> valor;

            if (operacao == 1) {
                frota[indice]->acelerar(valor);
            } else if (operacao == 2) {
                frota[indice]->frear(valor);
            }

        
            frota[indice]->exibirVelocidade(indice);
        }
    }


    for (Veiculo* v : frota) {
        delete v;
    }
    frota.clear();

    return 0;
}

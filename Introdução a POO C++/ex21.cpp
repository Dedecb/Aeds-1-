#include <iostream>
#include <vector>
#include <iomanip> 

using namespace std;


class Funcionario {
public:
    
    virtual double calcularSalario() = 0;

   
    void imprimirSalario() {
        cout << "Salario: " << fixed << setprecision(2) << calcularSalario() << endl;
    }

    
    virtual ~Funcionario() {}
};


class Vendedor : public Funcionario {
private:
    double salarioBase;
    double comissao;

public:
    
    Vendedor(double base, double com) {
        salarioBase = base;
        comissao = com;
    }

    
    double calcularSalario() override {
        return salarioBase + comissao;
    }
};


class Freelancer : public Funcionario {
private:
    double valorHora;
    double horasTrabalhadas;

public:
    
    Freelancer(double valor, double horas) {
        valorHora = valor;
        horasTrabalhadas = horas;
    }

    
    double calcularSalario() override {
        return valorHora * horasTrabalhadas;
    }
};


int main() {
    int n; 
    cin >> n;

    
    vector<Funcionario*> funcionarios;

    for (int i = 0; i < n; i++) {
        int tipo;
        cin >> tipo; 

        if (tipo == 1) {
            double base, comissao;
            cin >> base >> comissao;
            
            funcionarios.push_back(new Vendedor(base, comissao));
        }
        else if (tipo == 2) {
            double valorHora, horas;
            cin >> valorHora >> horas;
            
            funcionarios.push_back(new Freelancer(valorHora, horas));
        }
    }

    
    cout << "Dados dos Funcionarios:" << endl;

    double salarioTotal = 0.0;

    for (Funcionario* f : funcionarios) {
        f->imprimirSalario(); 
        salarioTotal += f->calcularSalario();
    }

    cout << "Salario total de todos os funcionarios: " << fixed << setprecision(2) << salarioTotal << endl;

   
    for (Funcionario* f : funcionarios) {
        delete f;
    }
    funcionarios.clear();

    return 0;
}

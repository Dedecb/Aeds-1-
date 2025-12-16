#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;


class Funcionario {
protected: 
    string nome;
    float salario;

public:
    
    void setNome(string n) {
        nome = n;
    }

    void setSalario(float s) {
        salario = s;
    }

    
    string getNome() {
        return nome;
    }

    float getSalario() {
        return salario;
    }

    
   
    void imprime() {
        cout << "Dados do Funcionario:" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Salario: " << fixed << setprecision(2) << salario << endl;
    }
};



class Gerente : public Funcionario {
private:
    float bonus;

public:
    
    void setBonus(float b) {
        bonus = b;
    }

    float getBonus() {
        return bonus;
    }

  
    void imprime() {
        
        Funcionario::imprime();
        
        cout << "Bonus Gerente: " << fixed << setprecision(2) << bonus << endl;
    }
};

int main() {
    
    Funcionario f;
    Gerente g;

   
    string nomeTemp;
    float salarioTemp, bonusTemp;

   
    getline(cin, nomeTemp); 
    cin >> salarioTemp;

   
    f.setNome(nomeTemp);
    f.setSalario(salarioTemp);

    
    cin.ignore();

   
    getline(cin, nomeTemp);
    cin >> salarioTemp;
    cin >> bonusTemp;

    
    g.setNome(nomeTemp);
    g.setSalario(salarioTemp); 
    g.setBonus(bonusTemp);

    
    f.imprime();
    g.imprime();

    return 0;
}

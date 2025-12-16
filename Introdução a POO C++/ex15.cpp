#include <iostream>
#include <string>

using namespace std;


class Veiculo {
private:
    string marca;
    int anoFabricacao;

public:
    
    void setMarca(string m) {
        marca = m;
    }

    void setAnoFabricacao(int a) {
        anoFabricacao = a;
    }

    
    string getMarca() {
        return marca;
    }

    int getAnoFabricacao() {
        return anoFabricacao;
    }
};


class Carro : public Veiculo {
private:
    int numeroPortas;

public:
   
    void setNumeroPortas(int p) {
        numeroPortas = p;
    }

    
    int getNumeroPortas() {
        return numeroPortas;
    }
};

int main() {
    
    string marcaTemp;
    int anoTemp, portasTemp;

    
    Veiculo v;

    
    cin >> marcaTemp;
    cin >> anoTemp;

  
    v.setMarca(marcaTemp);
    v.setAnoFabricacao(anoTemp);

    
    cout << "Dados do Veiculo:" << endl;
    cout << "Marca: " << v.getMarca() << endl;
    cout << "Ano de Fabricacao: " << v.getAnoFabricacao() << endl;


    
    Carro c;

   
    cin >> marcaTemp;
    cin >> anoTemp;
    cin >> portasTemp;

    
    c.setMarca(marcaTemp);
    c.setAnoFabricacao(anoTemp);
    c.setNumeroPortas(portasTemp);

   
    cout << "Dados do Carro:" << endl;
    cout << "Marca: " << c.getMarca() << endl;
    cout << "Ano de Fabricacao: " << c.getAnoFabricacao() << endl;
    cout << "Numero de Portas: " << c.getNumeroPortas() << endl;

    return 0;
}

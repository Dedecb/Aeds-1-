#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;


class Produto {
protected:
    string nome;
    float preco;

public:
   
    Produto() {}

    
    Produto(string n, float p) {
        nome = n;
        preco = p;
    }

    
    string getNome() { return nome; }
    void setNome(string n) { nome = n; }

    float getPreco() { return preco; }
    void setPreco(float p) { preco = p; }

   
    virtual void imprime() {
        cout << "Dados do Produto:" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Preco: " << fixed << setprecision(2) << preco << endl;
    }
};


class ProdutoEletronico : public Produto {
private:
    int garantia;

public:
    
    ProdutoEletronico() {}

    
    ProdutoEletronico(string n, float p, int g) : Produto(n, p) {
        garantia = g;
    }


    int getGarantia() { return garantia; }
    void setGarantia(int g) { garantia = g; }

    
    void estenderGarantia(int meses) {
        garantia += meses;
    }

    
    void imprime() override {
        
        Produto::imprime();
        
        cout << "Garantia: " << garantia << " meses" << endl;
    }
};

int main() {
    
    string nomeTemp;
    float precoTemp;
    int garantiaTemp, mesesExtra;

    
    getline(cin, nomeTemp);
    cin >> precoTemp;

    
    Produto p(nomeTemp, precoTemp);

    
    cin.ignore();

   
    getline(cin, nomeTemp);
    cin >> precoTemp;
    cin >> garantiaTemp;

   
    ProdutoEletronico pe(nomeTemp, precoTemp, garantiaTemp);

   
    p.imprime();
    pe.imprime();

    
    cin >> mesesExtra;
    pe.estenderGarantia(mesesExtra);

    
    pe.imprime();

    return 0;
}

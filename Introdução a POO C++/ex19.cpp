#include <iostream>
#include <string>

using namespace std;


class Animal {
private:
    string nome;

public:
    
    Animal() {
        nome = "";
    }

   
    Animal(string n) {
        nome = n;
    }

    
    string getNome() {
        return nome;
    }

    void setNome(string n) {
        nome = n;
    }

    
    virtual void imprime() {
        cout << "Dados do Animal:" << endl;
        cout << "Nome: " << nome << endl;
    }
};


class Cachorro : public Animal {
private:
    string raca;

public:
    
    Cachorro() : Animal() {
        raca = "Indefinido";
    }

   
    Cachorro(string n, string r) : Animal(n) {
        raca = r;
    }

    
    string getRaca() {
        return raca;
    }

    void setRaca(string r) {
        raca = r;
    }

    
    void imprime() override {
        
        Animal::imprime();
        
        cout << "Raca: " << raca << endl;
    }
};


int main() {
    string entradaNome;
    string entradaRaca;

    
    Animal animal;

    
    getline(cin, entradaNome);
    animal.setNome(entradaNome);

    
    animal.imprime();

    
    Cachorro cachorro("Duque", "Indefinido");

    
    cachorro.imprime();

    
    getline(cin, entradaNome);
    
    getline(cin, entradaRaca);

    cachorro.setNome(entradaNome);
    cachorro.setRaca(entradaRaca);

    
    cachorro.imprime();

    return 0;
}

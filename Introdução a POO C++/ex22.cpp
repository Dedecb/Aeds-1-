#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Animal {
public:
    
    virtual void fazerSom() = 0;

    
    void imprimirSom() {
        fazerSom();
    }

    virtual ~Animal() {}
};

class Cachorro : public Animal {
public:
    void fazerSom() override {
        cout << "O cachorro faz: Au Au!" << endl;
    }
};

class Gato : public Animal {
public:
    void fazerSom() override {
        cout << "O gato faz: Miau!" << endl;
    }
};

void emitirSons(const vector<Animal*>& animais) {
    cout << "Emitindo sons dos animais:" << endl;
    for (Animal* animal : animais) {

        animal->imprimirSom();
    }
}


int main() {
    vector<Animal*> animais; 
    int opcao;

    
    while (true) {
        
        cin >> opcao;

        if (opcao == 1) {
            animais.push_back(new Cachorro());
        } else if (opcao == 2) {
            animais.push_back(new Gato());
        } else if (opcao == 3) {
            break; 
        }
    }

    
    emitirSons(animais);

   
    for (Animal* animal : animais) {
        delete animal;
    }
    animais.clear();

    return 0;
}

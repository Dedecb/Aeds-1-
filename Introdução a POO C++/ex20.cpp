#include <iostream>
#include <cmath>    
#include <iomanip>  

using namespace std;


class Forma {
public:
    
    virtual double calcularArea() = 0;

   
    void imprimirArea() {
        cout << "Area: " << fixed << setprecision(2) << calcularArea() << endl;
    }
};


class Circulo : public Forma {
private:
    double raio;

public:
    
    Circulo(double r) {
        raio = r;
    }

    
    double calcularArea() override {
        return M_PI * pow(raio, 2);
    }
};


class Retangulo : public Forma {
private:
    double largura;
    double altura;

public:
    
    Retangulo(double l, double a) {
        largura = l;
        altura = a;
    }

    
    double calcularArea() override {
        return largura * altura;
    }
};


int main() {
    double raio, largura, altura;

    
    cin >> raio;
    Circulo circulo(raio);

    
    cin >> largura >> altura;
    Retangulo retangulo(largura, altura);


    cout << "Dados do Circulo:" << endl;
    circulo.imprimirArea(); 

    cout << "Dados do Retangulo:" << endl;
    retangulo.imprimirArea();

    return 0;
}

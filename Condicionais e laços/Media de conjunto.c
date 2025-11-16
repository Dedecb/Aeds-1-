//Média de Conjunto:
//Escreva um programa que leia um conjunto de números reais e, ao encontrar a flag -1, calcule e imprima a média desses números

#include <stdio.h>

int main() {
    float n, soma = 0, media;
    int contador = 0;

    while (1) {
        printf("Digite um numero (-1 para terminar):\n");
        scanf("%f", &n);

        if (n == -1) { // flag de parada
            break;
        }

        soma += n;
        contador++;
    }

    if (contador > 0) {
        media = soma / contador;
        printf("A media dos numeros fornecidos = %.2f\n", media);
    }

    return 0;
}

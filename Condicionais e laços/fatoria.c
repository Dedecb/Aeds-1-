//Escrever um algoritmo, para calcular e imprimir o fatorial de um número lido do teclado.

#include <stdio.h>

int main() {
    int numero, fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d e %d.\n", numero, fatorial);
    }

    return 0;
}
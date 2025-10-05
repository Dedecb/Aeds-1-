//Leia um número e imprima os números impares de 1 até esse número.

#include <stdio.h>

int main() {
    int x;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);

    printf("Numeros impares de 1 a %d:\n", x);
    for (int i = 1; i <= x; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
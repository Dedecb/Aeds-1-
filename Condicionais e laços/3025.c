//O numero 3025 possui a seguinte característica:
//30 + 25 = 55
//55^2 = 3025
//Quantos e quais são os números de 4 dígitos possuem essa característica?

#include <stdio.h>

int main() {
    int count = 0;

    printf("Numeros de 4 digitos que possuem a caracteristica:\n");
    for (int num = 1000; num <= 9999; num++) {
        int primeiraParte = num / 100; // Primeiros dois digitos
        int segundaParte = num % 100;   // Ultimos dois digitos
        int soma = primeiraParte + segundaParte;

        if (soma * soma == num) {
            printf("%d\n", num);
            count++;
        }
    }

    printf("Total de numeros encontrados: %d\n", count);
    return 0;
}
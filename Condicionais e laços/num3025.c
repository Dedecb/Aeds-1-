//O número 3025 possui a seguinte característica:
//30 + 25 = 55
//552 = 3025
//Fazer um algoritmo que dado um número de 4 dígitos (verifique se o número pertence a faixa) calcule e escreva se ele
//possui ou não esta característica.

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
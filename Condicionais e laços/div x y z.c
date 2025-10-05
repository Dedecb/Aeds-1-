//Desenvolver um algoritmo que leia três números inteiros: X, Y, Z e verifique se o número X é divisível por Y e por Z.
//O algoritmo deverá mostrar as possíveis mensagens:
//- o número é divisível por Y e Z.
//- o número é divisível por Y mas não por Z.
//- o número é divisível por Z mas não por Y.
//- o número não é divisível nem Y nem por Z.

#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite tres numeros inteiros (X, Y, Z): ");
    scanf("%d %d %d", &x, &y, &z);

    int divisivelPorY = (y != 0 && x % y == 0);
    int divisivelPorZ = (z != 0 && x % z == 0);

    if (divisivelPorY && divisivelPorZ) {
        printf("O numero %d e divisivel por %d e %d.\n", x, y, z);
    } else if (divisivelPorY && !divisivelPorZ) {
        printf("O numero %d e divisivel por %d mas nao por %d.\n", x, y, z);
    } else if (!divisivelPorY && divisivelPorZ) {
        printf("O numero %d e divisivel por %d mas nao por %d.\n", x, z, y);
    } else {
        printf("O numero %d nao e divisivel nem por %d nem por %d.\n", x, y, z);
    }

    return 0;
}
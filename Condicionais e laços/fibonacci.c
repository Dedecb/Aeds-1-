//A série de Fibonacci é formada pela sequência:
//1, 1, 2, 3, 5, 8, 13, 21, 34, ...
//Escreva um algoritmo que peça um número N maior que 2. Gere e imprima a série de 1 até este enésimo
//termo.

#include <stdio.h>

int main() {
    int n, t1 = 1, t2 = 1, proximoTermo;

    printf("Digite um numero N maior que 2: ");
    scanf("%d", &n);

    if (n <= 2) {
        printf("Por favor, digite um numero maior que 2.\n");
        return 1;
    }

    printf("Serie de Fibonacci ate o %d termo:\n", n);
    printf("%d\n", t1);
    printf("%d\n", t2);

    for (int i = 3; i <= n; i++) {
        proximoTermo = t1 + t2;
        printf("%d\n", proximoTermo);
        t1 = t2;
        t2 = proximoTermo;
    }

    return 0;
}
//Sequência de Fibonacci:
//A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Crie um programa que peça um número N maior que 2 e gere a série até o N-ésimo termo.

#include <stdio.h>

int main() {
    int n;

    while (1) {
        printf("Digite um numero maior que 2:\n");
        scanf("%d", &n);

        if (n > 2) {
            break; // número válido → sai do loop
        } else {
            printf("Numero invalido! Deve ser maior que 2.\n");
        }
    }

    int a = 1, b = 1, prox;

    printf("A sequencia de Fibonacci ate o %d termo: %d,%d", n, a, b);

    for (int i = 3; i <= n; i++) {
        prox = a + b;
        printf(",%d", prox);
        a = b;
        b = prox;
    }

    printf("\n");
    return 0;
}

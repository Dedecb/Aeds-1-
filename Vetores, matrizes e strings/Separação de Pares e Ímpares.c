//]Leia 10 números inteiros e armazene-os em um vetor v. Crie dois novos vetores, v1 e v2. Copie os valores ímpares de v para v1 e os
//valores pares de v para v2. Note que cada um dos vetores v1 e v2 tem, no máximo, 10 elementos, mas nem todos podem ser utilizados.
//Ao final, escreva apenas os elementos utilizados de v1 e v2.

#include <stdio.h>

int main() {
    int v[10];
    int v1[10]; // ímpares
    int v2[10]; // pares
    int i, count_v1 = 0, count_v2 = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            v2[count_v2] = v[i];
            count_v2++;
        } else {
            v1[count_v1] = v[i];
            count_v1++;
        }
    }

    printf("\nVetor v1 (impares): ");
    for (i = 0; i < count_v1; i++) {
        printf("%d ", v1[i]);
    }

    printf("\nVetor v2 (pares): ");
    for (i = 0; i < count_v2; i++) {
        printf("%d ", v2[i]);
    }

    return 0;
}


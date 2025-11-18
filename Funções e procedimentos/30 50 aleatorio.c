//Escrever um programa que leia um valor e chame a função e o procedimentos criados.
//- Construa uma função que retorne um vetor real, com valores aleatórios entre 30 e 50
//(intervalo fechado), de tamanho N – passe o tamanho N por valor.
//- Construa um procedimento para imprimir um vetor real de tamanho N – passe o vetor e o
//tamanho N por valor

#include <stdio.h>
#include <stdlib.h>  // malloc, rand
#include <time.h>    // time (para srand)

float* Nvet(int num) {
    float *vetor = (float*) malloc(num * sizeof(float));

    for (int i = 0; i < num; i++) {
        vetor[i] = 30 + (rand() % 21);
    }

    return vetor;
}

void escreveVet(float vetor[], int num2) {
    for (int i = 0; i < num2; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int n;
    float *meuVetor;

    srand(time(NULL));

    printf("Escreva o tamanho do vetor: ");
    scanf("%d", &n);

    meuVetor = Nvet(n);
    escreveVet(meuVetor, n);

    free(meuVetor);

    return 0;
}

//Desenvolver um programa que leia o número de alunos em uma turma.
//Em seguida:
//a) criar uma função que devolva um vetor com os nomes dos alunos.
//b) uma função que devolva uma matriz contendo quatro notas por aluno – notas do tipo inteiro.
//c) uma função que receba a matriz de notas e devolva um vetor do tipo real contendo a média de cada aluno.
//d) uma função que devolva um vetor com a classificação em ordem alfabética dos alunos da turma.
//e) uma função que receba os vetores e matrizes criados e imprima os alunos em ordem alfabética , bem como suas
//médias

#include <stdio.h>
#include <string.h>

void lerNomes(int n, char nomes[n][50]) {
    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
    }
}

void lerNotas(int n, int notas[n][4]) {
    for (int i = 0; i < n; i++) {
        printf("Digite as 4 notas do aluno %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%d", &notas[i][j]);
        }
    }
}

void calcularMedias(int n, int notas[n][4], float medias[n]) {
    for (int i = 0; i < n; i++) {
        int soma = 0;
        for (int j = 0; j < 4; j++) {
            soma += notas[i][j];
        }
        medias[i] = soma / 4.0;
    }
}

void ordenarAlunos(int n, char nomes[n][50], float medias[n]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                char tempNome[50];
                float tempMedia;

                strcpy(tempNome, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], tempNome);

                tempMedia = medias[i];
                medias[i] = medias[j];
                medias[j] = tempMedia;
            }
        }
    }
}

void imprimirResultados(int n, char nomes[n][50], float medias[n]) {
    printf("\nAlunos em ordem alfabetica com suas medias:\n");
    for (int i = 0; i < n; i++) {
        printf("Aluno: %s, Media: %.2f\n", nomes[i], medias[i]);
    }
}

int main() {
    int n;

    printf("Digite o numero de alunos na turma: ");
    scanf("%d", &n);

    char nomes[n][50];
    int notas[n][4];
    float medias[n];

    lerNomes(n, nomes);
    lerNotas(n, notas);
    calcularMedias(n, notas, medias);
    ordenarAlunos(n, nomes, medias);
    imprimirResultados(n, nomes, medias);

    return 0;
}

//O Desafio do Guardião dos Números:
//Como guardião dos números, sua tarefa é proteger e analisar um conjunto de sequências de valores. Construa um programa que leia a quantidade de sequencias que serão informadas,
//em seguida para cada série de números inteiros leia números até encontrar um valor negativo, e então revele pra cada sequencia o menor, o maior e a média entre eles.

#include <stdio.h>

int main() {
    int Vserie;
    int serie, n, menor, maior, soma, contador;

    printf("Digite o numero de series:\n");
    scanf("%d", &Vserie);

    for (serie = 1; serie <= Vserie; serie++) {

        contador = 1;
        soma = 0;

        printf("Digite o %d numero da %d serie:\n", contador, serie);
        scanf("%d", &n);

        // Se o primeiro número já for negativo
        if (n < 0) {
            printf("Resultado para a %d serie:\n", serie);
            printf("Nao existem numeros para essa serie!\n");
            continue;
        }

        // inicializa menor, maior e soma com o primeiro valor válido
        menor = n;
        maior = n;
        soma = n;

        contador++;

        while (1) {
            printf("Digite o %d numero da %d serie (Flag valor negativo):\n", contador, serie);
            scanf("%d", &n);

            if (n < 0) {
                int quantidade = contador - 1; // quantos números válidos foram lidos
                float media = (float)soma / quantidade;

                printf("Resultado para a %d serie:\n", serie);
                printf("O menor numero encontrado = %d\n", menor);
                printf("O maior numero encontrado = %d\n", maior);
                printf("A media = %.2f\n", media);

                break;
            }

            // atualiza menor/maior e acumula soma
            if (n < menor) menor = n;
            if (n > maior) maior = n;
            soma += n;

            contador++;
        }
    }

    return 0;
}


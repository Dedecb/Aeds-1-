//A Caça ao Tesouro dos Números:
//Você é um explorador em busca do menor número inteiro em sequências misteriosas de valores. Desenvolva um programa que leia a quantidade de sequencias que serão informadas,
//em seguida para cada série de números e identifique o menor deles. A jornada de cada serie termina quando um número negativo é encontrado, marcando o fim da busca para essa serie

#include <stdio.h>

int main() {
    int Vserie;
    int serie, n, menor, contador;

    printf("Digite o numero de series:\n");
    scanf("%d", &Vserie);

    for (serie = 1; serie <= Vserie; serie++) {

        contador = 1;
        menor = 999999;

        printf("Digite o %d numero da %d serie:\n", contador, serie);
        scanf("%d", &n);

        if (n < 0) {
            printf("Nao existem numeros para essa serie!\n");
            continue;
        }

        menor = n;
        contador++;

        while (1) {
            printf("Digite o %d numero da %d serie (Flag valor negativo):\n", contador, serie);
            scanf("%d", &n);

            if (n < 0) {
                printf("O menor numero encontrado da %d serie = %d\n", serie, menor);
                break;
            }

            if (n < menor) {
                menor = n;
            }

            contador++;
        }
    }

    return 0;
}

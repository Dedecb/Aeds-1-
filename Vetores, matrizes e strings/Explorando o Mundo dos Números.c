//Explorando o Mundo dos Números
//Imagine que você está criando um jogo em que o jogador deve enfrentar uma série de desafios numéricos. Primeiro, peça ao jogador para definir o número de desafios que ele deseja enfrentar. Em seguida, para cada desafio peça os elementos (flag valorNegativo).máximo 100 elementos Ao final da leitura mostre todos os numeros do desafio atual. Em seguida, para cada desafio mostre mostre ao jogador qual foi o desafio mais fácil e qual foi o mais difícil!

#include <stdio.h>

int main() {
    int qtdDesafios, i, j, num;
    int elementos[100];
    int qtdElementos;

    printf("Digite a quantidade de desafios:\n");
    scanf("%d", &qtdDesafios);

    for (i = 1; i <= qtdDesafios; i++) {
        qtdElementos = 0;

        while (1) {
            printf("Digite o %d elemento do %d desafio:\n", qtdElementos + 1, i);
            scanf("%d", &num);

            if (num == -1) break; // fim dos elementos do desafio

            if (qtdElementos < 100) {
                elementos[qtdElementos++] = num;
            }
        }

        if (qtdElementos == 0) {
            printf("Desafio nao possui elementos!\n");
            continue;
        }

        // Mostrando todos os elementos
        printf("Elementos do %d desafio:", i);
        for (j = 0; j < qtdElementos; j++) {
            if (j != 0) printf(",");
            printf("%d", elementos[j]);
        }
        printf(".\n");

        // Encontrando o mais fácil (mínimo) e o mais difícil (máximo)
        int min = elementos[0];
        int max = elementos[0];
        for (j = 1; j < qtdElementos; j++) {
            if (elementos[j] < min) min = elementos[j];
            if (elementos[j] > max) max = elementos[j];
        }

        printf("Desafio mais facil:%d\n", min);
        printf("Desafio mais dificil:%d\n", max);
    }

    return 0;
}

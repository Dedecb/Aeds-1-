//Desvendando Mistérios Numéricos
//Você foi contratado como um detetive de dados para analisar um conjunto de informações misteriosas. Peça ao usuário quantos conjuntos deseja analisar. Peça ao usuário para cada conjunto, informar as pistas (números) ele deseja investigar. (flag valorNegativo) máximo de 100 valores. Após a leitura mostre os valores lidos! Após ler essas pistas, descubra quantas delas são mais complexas (maiores) do que a média do conjunto. Ajude a desvendar o mistério!

#include <stdio.h>

int main() {
    int qtdInfos, i, j, qtdPistas;
    int pistas[100];
    int valor;

    printf("Digite a quantidade de informacoes:\n");
    scanf("%d", &qtdInfos);

    for (i = 1; i <= qtdInfos; i++) {
        qtdPistas = 0;

        while (1) {
            printf("Digite a %d pista da %d informacao misteriosa:\n", qtdPistas + 1, i);
            scanf("%d", &valor);

            if (valor == -1) break; // fim das pistas

            if (qtdPistas < 100) {
                pistas[qtdPistas++] = valor;
            }
        }

        if (qtdPistas == 0) {
            printf("Essa informacao nao possui pistas!\n");
            continue;
        }

        // Mostrar todas as pistas
        printf("Pistas da %d informacao misteriosa:", i);
        for (j = 0; j < qtdPistas; j++) {
            if (j != 0) printf(",");
            printf("%d", pistas[j]);
        }
        printf(".\n");

        // Calcular a média
        double soma = 0;
        for (j = 0; j < qtdPistas; j++) {
            soma += pistas[j];
        }
        double media = soma / qtdPistas;

        // Contar quantas pistas são maiores que a média
        int contMaior = 0;
        for (j = 0; j < qtdPistas; j++) {
            if (pistas[j] > media) contMaior++;
        }

        printf("%d pistas sao maiores que a media %.2f\n", contMaior, media);
    }

    return 0;
}

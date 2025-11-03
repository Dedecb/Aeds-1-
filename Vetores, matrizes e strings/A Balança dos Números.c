//A Balança dos Números
//Como um alquimista digital, sua tarefa é equilibrar uma balança mágica de números. Peça ao usuário quantos conjuntos deseja analisar. Primeiro, peça ao usuário para escolher quantos ingredientes mágicos (números) ele gostaria de adicionar ao caldeirão. máximo de 100 ingredientes. Depois de ler a lista de ingredientes. Após a leitura mostre os valores lidos! e descubra quantos são mais pesados (maiores) e quantos são mais leves (menores) que a média mágica do caldeirão.

#include <stdio.h>

int main() {
    int qtdReceitas, i, j, qtdIngredientes;
    int ingredientes[100];
    int valor;

    printf("Digite a quantidade de receitas:\n");
    scanf("%d", &qtdReceitas);

    for (i = 1; i <= qtdReceitas; i++) {
        qtdIngredientes = 0;

        while (1) {
            printf("Digite o %d ingrediente da %d receita:\n", qtdIngredientes + 1, i);
            scanf("%d", &valor);

            if (valor == -1) break; // fim da leitura dos ingredientes

            if (qtdIngredientes < 100) {
                ingredientes[qtdIngredientes++] = valor;
            }
        }

        if (qtdIngredientes == 0) {
            printf("Essa receita nao possui ingredientes!\n");
            continue;
        }

        // Mostrar todos os ingredientes
        printf("Ingredientes da %d receita:", i);
        for (j = 0; j < qtdIngredientes; j++) {
            if (j != 0) printf(",");
            printf("%d", ingredientes[j]);
        }
        printf(".\n");

        // Calcular média
        double soma = 0;
        for (j = 0; j < qtdIngredientes; j++) {
            soma += ingredientes[j];
        }
        double media = soma / qtdIngredientes;

        // Contar maiores e menores que a média
        int maiores = 0, menores = 0;
        for (j = 0; j < qtdIngredientes; j++) {
            if (ingredientes[j] > media) maiores++;
            if (ingredientes[j] < media) menores++;
        }

        printf("%d pistas sao maiores que a media %.2f\n", maiores, media);
        printf("%d pistas sao menores que a media %.2f\n", menores, media);
    }

    return 0;
}

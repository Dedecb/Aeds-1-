//Caça ao Tesouro Numérico
//Você está no meio de uma emocionante caça ao tesouro numérico! Primeiro, peça ao explorador para indicar quantos tesouros ele quer descobrir. leia uma lista de valores representando a localização dos tesouros. Em seguida, permita que o explorador insira quantas coordenadas quiser para tentar encontrar os tesouros. (flag valorNegativo) Para cada tentativa, revele se o tesouro está na lista ou não, caso esteja informe a posição do tesouro na lista!

#include <stdio.h>

int main() {
    int qtdTesouros, i, j;
    int tesouros[100];
    int tentativa;

    printf("Digite a quantidade de tesouros:\n");
    scanf("%d", &qtdTesouros);

    for (i = 0; i < qtdTesouros; i++) {
        printf("Digite o %d tesouro:\n", i + 1);
        scanf("%d", &tesouros[i]);
    }

    // Mostrar os tesouros lidos
    printf("Coordenadas dos tesouros:");
    for (i = 0; i < qtdTesouros; i++) {
        if (i != 0) printf(",");
        printf("%d", tesouros[i]);
    }
    printf(".\n");

    // Ler coordenadas de tentativa até -1
    while (1) {
        printf("Digte a coordenada:\n");
        scanf("%d", &tentativa);
        if (tentativa == -1) break;

        int encontrados[100];
        int qtdEncontrados = 0;

        // Procurar todas as ocorrências
        for (i = 0; i < qtdTesouros; i++) {
            if (tesouros[i] == tentativa) {
                encontrados[qtdEncontrados++] = i + 1; // posições começam em 1
            }
        }

        if (qtdEncontrados == 0) {
            printf("Tesouro %d nao encontrado em nenhuma coordenada!\n", tentativa);
        } else if (qtdEncontrados == 1) {
            printf("Tesouro %d encontrado na coordenada:%d\n", tentativa, encontrados[0]);
        } else {
            printf("Tesouro %d encontrado nas coordenadas:", tentativa);
            for (i = 0; i < qtdEncontrados; i++) {
                if (i != 0) printf(",");
                printf("%d", encontrados[i]);
            }
            printf(".\n");
        }
    }

    return 0;
}

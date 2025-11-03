//Saudação Real:​O reino está recebendo visitantes de várias terras distantes. Crie um procedimento chamado saudarVisitante que receba o nome de um visitante, máximo 50 caracteres e exiba uma mensagem de boas-vindas, como "Ola, [Nome]! Seja bem-vindo ao Reino!". Mostre sua hospitalidade!”​dica em c: utilize: scanf(" %99[^\n\r]", nome); para ler o nome

#include <stdio.h>

void saudarVisitante(char nome[]) {
    printf("Estou no procedimento!\n");
    printf("Ola,%s! Seja bem-vindo ao Reino!\n", nome);
    printf("saindo do procedimento!\n");
}

int main() {
    int n, i;
    char nome[100];

    printf("Quantos visitantes voce deseja?:\n");
    scanf("%d", &n);
    getchar(); // limpa o \n deixado pelo scanf anterior

    for (i = 1; i <= n; i++) {
        printf("Digite o %d nome:\n", i);
        scanf(" %[^\n\r]", nome);
        printf("Chamando o procedimento!\n");
        saudarVisitante(nome);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}

//Guardião da Aldeia:​Você é o guardião de uma aldeia e precisa verificar se os jovens da aldeia já atingiram a maioridade para participar das festividades. Crie um procedimento chamado verificarMaioridade que receba a idade de uma pessoa e exiba se ela é "Maior de idade" ou "Menor de idade". Ajude a garantir que apenas os maiores participem!​

#include <stdio.h>

void verificarMaioridade(int idade) {
    printf("Estou no procedimento!\n");

    if (idade >= 18)
        printf("Maior de idade\n");
    else
        printf("Menor de idade\n");

    printf("saindo do procedimento!\n");
}

int main() {
    int n, i, idade;

    printf("Quantas idades voce deseja verificar?:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o %d valor:\n", i);
        scanf("%d", &idade);
        printf("Chamando o procedimento!\n");
        verificarMaioridade(idade);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}

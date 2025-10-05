//Escreva um programa para ler a idade de uma pessoa e mostrar se a pessoa é ou não maior de idade. A maioridade se
//estabelece ao alcançar 18 anos.

#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Voce e maior de idade.\n");
    } else {
        printf("Voce nao e maior de idade.\n");
    }

    return 0;
}
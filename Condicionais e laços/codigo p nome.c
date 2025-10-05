//- ler um código do teclado e mostrar o nome correspondente, de acordo com a lista :
//221 Bernardo
//211 Eustáquio
//311 Luiz
//312 Mário
//332 Artur

#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o codigo (221, 211, 311, 312, 332): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 221:
            printf("Nome: Bernardo\n");
            break;
        case 211:
            printf("Nome: Eustaquio\n");
            break;
        case 311:
            printf("Nome: Luiz\n");
            break;
        case 312:
            printf("Nome: Mario\n");
            break;
        case 332:
            printf("Nome: Artur\n");
            break;
        default:
            printf("Codigo invalido.\n");
            break;
    }

    return 0;
}
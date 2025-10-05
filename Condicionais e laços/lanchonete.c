//O cardápio de uma lanchonete é dado abaixo. Prepare um programa que o código correspondente ao item da
//lanchonete e mostre a descrição do item e seu valor. Caso for digitado um valor não existente mostre a mensagem
//código inválido
//1 – Hambúrguer............... R$ 30,00
//2 - Cheeseburger.............. R$ 35,50
//3 - Fritas............................ R$ 20,50
//4 - Refrigerante................. R$ 10,00
//5 - Milkshake..................... R$ 30,00
//.. – código inválido

#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o codigo do item do cardapio (1 a 5): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Item: Hamburguer - R$ 30,00\n");
            break;
        case 2:
            printf("Item: Cheeseburger - R$ 35,50\n");
            break;
        case 3:
            printf("Item: Fritas - R$ 20,50\n");
            break;
        case 4:
            printf("Item: Refrigerante - R$ 10,00\n");
            break;
        case 5:
            printf("Item: Milkshake - R$ 30,00\n");
            break;
        default:
            printf("Codigo invalido.\n");
            break;
    }

    return 0;
}
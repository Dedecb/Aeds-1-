//Faça um menu para o usuário escolher qual exercício deverá se executado.

#include <stdio.h>

int main() {
    int escolha;

    printf("Escolha um exercicio para executar:\n");
    printf("1 - Sequencia de 1 a 10\n");
    printf("2 - Sequencia de 10 a 1\n");
    printf("3 - Par ou Impar\n");
    printf("4 - Maior de Idade\n");
    printf("5 - Fatorial\n");
    printf("6 - Numeros Impares de 1 a X\n");
    printf("7 - Serie de Fibonacci\n");
    printf("8 - Numeros de 4 digitos com caracteristica especial\n");
    printf("9 - Cardapio da Lanchonete\n");
    printf("Digite o numero do exercicio (1-9): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            // Chamar função ou código para Sequencia de 1 a 10
            for (int i = 1; i <= 10; i++) {
                printf("%d\n", i);
            }
            break;
        case 2:
            // Chamar função ou código para Sequencia de 10 a 1
            for (int i = 10; i >= 1; i--) {
                printf("%d\n", i);
            }
            break;
        case 3:
            // Chamar função ou código para Par ou Impar
            {
                int numero;
                printf("Digite um numero: ");
                scanf("%d", &numero);
                if (numero % 2 == 0) {
                    printf("O numero %d e par.\n", numero);
                } else {
                    printf("O numero %d e impar.\n", numero);
                }
            }
            break;
        case 4:
            // Chamar função ou código para Maior de Idade
            {
                int idade;
                printf("Digite sua idade: ");
                scanf("%d", &idade);
                if (idade >= 18) {
                    printf("Voce e maior de idade.\n");
                } else {
                    printf("Voce nao e maior de idade.\n");
                }
            }
            break;
        case 5:
            // Chamar função ou código para Fatorial
            {
                int numero, fatorial = 1;
                printf("Digite um numero inteiro nao negativo: ");
                scanf("%d", &numero);
                if (numero < 0) {
                    printf("Fatorial nao definido para numeros negativos.\n");
                } else {
                    for (int i = 1; i <= numero; i++) {
                        fatorial *= i;
                    }
                    printf("O fatorial de %d e %d.\n", numero, fatorial);
                }
            }
            break;  
        case 6:
            // Chamar função ou código para Numeros Impares de 1 a X
            {
                int x;
                printf("Digite um numero inteiro positivo: ");
                scanf("%d", &x);
                printf("Numeros impares de 1 a %d:\n", x);
                for (int i = 1; i <= x; i += 2) {
                    printf("%d\n", i);
                }
            }
            break;
        case 7:
            // Chamar função ou código para Serie de Fibonacci
            {
                int n, t1 = 1, t2 = 1, proximoTermo;
                printf("Digite um numero N maior que 2: ");
                scanf("%d", &n);
                if (n <= 2) {
                    printf("Por favor, digite um numero maior que 2.\n");
                } else {
                    printf("Serie de Fibonacci ate o %d termo:\n", n);
                    printf("%d\n", t1);
                    printf("%d\n", t2);
                    for (int i = 3; i <= n; i++) {
                        proximoTermo = t1 + t2;
                        printf("%d\n", proximoTermo);
                        t1 = t2;
                        t2 = proximoTermo;
                    }
                }
            }
            break;
        case 8:
            // Chamar função ou código para Numeros de 4 digitos com caracteristica especial    
            {
                int count = 0;
                printf("Numeros de 4 digitos que possuem a caracteristica:\n");
                for (int num = 1000; num <= 9999; num++) {
                    int primeiraParte = num / 100; // Primeiros dois digitos
                    int segundaParte = num % 100;   // Ultimos dois digitos
                    int soma = primeiraParte + segundaParte;
                    if (soma * soma == num) {
                        printf("%d\n", num);
                        count++;
                    }
                }
                printf("Total de numeros encontrados: %d\n", count);
            }
            break;
        case 9:
            // Chamar função ou código para Cardapio da Lanchonete
            {
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
            }
            break;
        default:
            printf("Escolha invalida. Por favor, escolha um numero entre 1 e 9.\n");
            break;
    }
    return 0;
}

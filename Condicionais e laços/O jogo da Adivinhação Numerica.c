//Jogo da Adivinhação Numérica
//Bem-vindo ao desafio final: o jogo da adivinhação numérica! Crie um programa que desafie o usuário a pensar em um conjunto de números (flag valor menor que 1), entre 1 e 1023.
//Seu programa deve adivinhar para cada numero escolhido em no máximo 10 tentativas, usando a técnica do valor intermediário. Conte quantas tentativas foram necessárias para alcançar
//a vitória para cada numero.

#include <stdio.h>

int main() {
    int numero_escolhido;

    while(1){
        printf("Pense em um numero de 1 a 1023\n");
        printf("Neste caso para testar o programa me diga o numero que voce escolheu:\n");
        scanf("%d", &numero_escolhido);

        if (numero_escolhido < 1){
            break;
        }

        int menor = 1, maior = 1023;
        int tentativas = 0;

        while (1){
            int meio = (menor + maior) / 2;
            tentativas++;

            printf("O numerio >,< ou = %d\n", meio);

            if (numero_escolhido > meio){
                menor = meio + 1;
            }
            else if (numero_escolhido < meio){
                maior = meio - 1;
            }
            else{
                printf("Advinhei o numero %d em %d tentativas!\n", meio, tentativas);
                break;
            }
        }

    }

    return 0;
}

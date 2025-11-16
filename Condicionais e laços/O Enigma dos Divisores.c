//O Enigma dos Divisores
//Você é um decifrador de enigmas numéricos. Crie um programa que peça uma serie de valores (flag valor negativo) e para cada valor determine seu status de divisibilidade.
//O número pode ser um mestre dos divisores, sendo divisível por 5 e 3, ou pode ter outras combinações. Desvende o enigma e mostre a verdade sobre cada número! As mensagens deverão ser:
//é divisível por 5 e 3 ao mesmo tempo
//é divisível por 5 mas não por 3
//é divisível por 3 mas não por 5
//não é divisível nem por 5 nem por 3

#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    while (n >= 0) {

        if (n % 5 == 0 && n % 3 == 0) {
            printf("O numero %d e divisivel por 5 e 3 ao mesmo tempo\n", n);
        }
        else if (n % 5 == 0 && n % 3 != 0) {
            printf("O numero %d e divisivel por 5 mas nao por 3\n", n);
        }
        else if (n % 5 != 0 && n % 3 == 0) {
            printf("O numero %d e divisivel por 3 mas nao por 5\n", n);
        }
        else {
            printf("O numero %d nao e divisivel nem por 5 nem por 3\n", n);
        }

        printf("Digite um numero(flag valor negativo):\n");
        scanf("%d", &n);
    }

    return 0;
}

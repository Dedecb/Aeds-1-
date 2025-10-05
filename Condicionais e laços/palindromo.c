//Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.
//Exemplo:929, 44, 97379. Fazer um algoritmo que dado um número de 5 dígitos; calcule e escreva se este e ou não palíndromo.

#include <stdio.h>

int main() {
    int numero, digito1, digito2, digito4, digito5;

    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &numero);

    if (numero < 10000 || numero > 99999) {
        printf("Por favor, digite um numero de exatamente 5 digitos.\n");
        return 1;
    }

    digito1 = numero / 10000;           // Primeiro dígito
    digito2 = (numero / 1000) % 10;     // Segundo dígito
    digito4 = (numero / 10) % 10;       // Quarto dígito
    digito5 = numero % 10;              // Quinto dígito

    if (digito1 == digito5 && digito2 == digito4) {
        printf("O numero %d e um palindromo.\n", numero);
    } else {
        printf("O numero %d nao e um palindromo.\n", numero);
    }

    return 0;
}
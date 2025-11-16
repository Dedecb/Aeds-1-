//Soma Progressiva:
//Escreva um programa que leia um número e, em seguida, calcule e imprima a soma de todos os números de 1 até esse número.

#include <stdio.h>

int main(){
    int n, soma;

    printf("Digite um numero:\n");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        soma += i;
    }
    printf("A soma de todos os numeros de 1 ate %d = %d", n, soma);

    return 0;
}

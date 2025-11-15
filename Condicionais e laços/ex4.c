//Fatorial Fascinante:
//Crie um programa que leia um número e, em seguida, calcule e imprima o fatorial desse número.

#include <stdio.h>

int main(){
int n, fat = 1;

    printf("Digite um numero:\n");
    scanf("%d", &n);


    for(int i = 1; i <= n; i++){
        fat *= i;
    }

    printf("O fatorial de %d = %d", n, fat);

return 0;
}

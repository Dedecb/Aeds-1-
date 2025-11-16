//Desafio do Triplo Mágico:
//Crie um programa que leia um número e, em seguida, imprimindo o triplo desse número. Repita essa interação 5 vezes

#include <stdio.h>

int main(){
int n, triplo = 0, i = 0;

while(i < 5){
        printf("Digite um numero:\n");
        scanf("%d", &n);
        triplo = n * 3;
        printf("O triplo de %d = %d\n", n, triplo);
        i++;
    }
return 0;
}



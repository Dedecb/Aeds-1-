//Ímpares a Partir de um Valor:
//Desenvolva um programa que peça um valor inicial e, a partir desse valor, mostre os próximos 10 números ímpares.

#include <stdio.h>

int main(){
    int n, i = 0;

    printf("Digite o valor inicial:\n");
    scanf("%d", &n);

    while(i < 20){
        n++;
        if(n % 2 != 0){
            printf("%d,", n);
        }
    i++;
    }


return 0;
}

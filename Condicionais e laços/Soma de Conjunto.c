//Soma de Conjunto:
//Desenvolva um programa que leia um conjunto de números e, ao encontrar a flag -1, imprima a soma desses números.

#include <stdio.h>

int main(){
    int n, soma = 0, flag = -1;

        while(1){
            printf("Digite um numero (-1) para ternimar:\n");
            scanf("%d", &n);
            if(n == -1){
                break;
            }
            soma += n;
        }

        printf("A soma dos numeros fornecidos = %d", soma);

return 0;
}

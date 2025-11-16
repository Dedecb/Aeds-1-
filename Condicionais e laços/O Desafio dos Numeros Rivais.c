//O Desafio dos Números Rivais:
//Imagine que você é um juiz em uma competição de números. Sua missão é criar um programa que receba um conjunto de pares de números (FLAG valor par de numeros negativos) competidores
//e determine para cada 2 valores qual deles é o vencedor, ou se eles são igualmente poderosos e ao final mostrar qual o número mais poderoso de todos!

#include <stdio.h>

int main(){
    int n1, n2, Nmaior = -99999 , Nwin;

    while(1){
        printf("Digite o primeiro numero competidor:\n");
        scanf("%d", &n1);
        if(n1 < 0 && n1 % 2 == 0) {
            break;
        }

        printf("Digite o segundo numero competidor:\n");
        scanf("%d", &n2);
        if(n2 < 0 && n2 % 2 == 0){
            break;
        }


        if(n1 > n2){
            Nwin = n1;
        }
        else{
            Nwin = n2;
        }

        if(Nwin > Nmaior){
            Nmaior = Nwin;
        }

        printf("O numero %d e o vencedor!\n", Nwin);
    }

    printf("Numero maior de todos:%d", Nmaior);

return 0;
}

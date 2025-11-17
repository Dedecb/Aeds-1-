//Sequência de Fibonacci:
//Enunciado: "Você está desenvolvendo um programa para um museu de matemática que deseja mostrar a famosa sequência de Fibonacci.
//Crie um procedimento que permita ao usuário escolher quantos números da sequência deseja ver. O procedimento deve calcular e exibir os números da sequência até o termo solicitado.

#include <stdio.h>

void fibonacci(){
    int n;

    printf("Estou no procedimento!\n");
    printf("Digite quantos termos da serie:\n");
    scanf("%d", &n);

    if(n <= 0){
        printf("Voce escolheu um numero invalido!\n");
        printf("saindo do procedimento!\n");
        return;
    }

    if(n == 1){
        printf("1\n");
        printf("saindo do procedimento!\n");
        return;
    }

    if(n == 2){
        printf("1,1\n");
        printf("saindo do procedimento!\n");
        return;
    }

    int a = 1, b = 1, c;
    printf("1,1");

    for(int i = 3; i <= n; i++){
        c = a + b;
        printf(",%d", c);
        a = b;
        b = c;
    }

    printf("\nsaindo do procedimento!\n");
}

int main(){
    int qntd;

    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &qntd);

    for(int i = 0; i < qntd; i++){
        printf("Chamando o procedimento!\n");
        fibonacci();
        printf("Voltou do procedimento!\n");
    }

    return 0;
}

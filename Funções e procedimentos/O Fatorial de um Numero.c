//Fatorial de um Número:
//Enunciado: "Você foi contratado para ajudar um alquimista a calcular o fatorial de números inteiros positivos, uma operação essencial para suas poções.
//Crie um procedimento que receba um número lido no programa principal, calcule o fatorial multiplicando todos os inteiros de 1 até esse número, e exiba o resultado no programa principal.
//Utilize loops para realizar essa tarefa de forma eficiente.”

#include <stdio.h>

int Nfatorial(int num){
    int fat = 1;

    printf("Estou no procedimento!\n");

    for(int i = 1; i <= num; i++){
        fat *= i;
    }

    printf("saindo do procedimento!\n");

    return fat;
}

int main(){
    int qntd, n, resultado;

    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &qntd);

    for(int i = 1; i <= qntd; i++){

        printf("Digite o %d valor:\n", i);
        scanf("%d", &n);

        printf("Chamando o procedimento!\n");

        resultado = Nfatorial(n);

        printf("Voltou do procedimento!\n");

        printf("O fatorial de %d = %d\n", n, resultado);
    }

    return 0;
}

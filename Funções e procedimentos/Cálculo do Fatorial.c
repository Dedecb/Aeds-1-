//Fatorial de um Número: Enunciado: "Você foi contratado para ajudar um alquimista a calcular o fatorial de números inteiros positivos, uma operação essencial para suas poções. Crie um procedimento que receba um número lido no programa principal, calcule o fatorial multiplicando todos os inteiros de 1 até esse número, e exiba o resultado no programa principal. Utilize loops para realizar essa tarefa de forma eficiente.”

#include <stdio.h>

int fatorial(int n) {
    int i, fat = 1;

    printf("Estou no procedimento!\n");

    for (i = 1; i <= n; i++) {
        fat *= i;
    }

    printf("saindo do procedimento!\n");

    return fat;
}

int main() {
    int qtd, i, valor, resultado;

    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++) {
        printf("Digite o %d valor:\n", i);
        scanf("%d", &valor);
        printf("Chamando o procedimento!\n");
        resultado = fatorial(valor);
        printf("Voltou do procedimento!\n");
        printf("O fatorial de %d = %d\n", valor, resultado);
    }

    return 0;
}

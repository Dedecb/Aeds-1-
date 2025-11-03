//Poder da Potência:​
//Um alquimista está tentando criar uma fórmula poderosa usando uma base e um expoente. Crie uma função chamada calcularPotencia que receba dois números inteiros positivos: a base e o expoente, e retorne o resultado da potência.
//Ajude o alquimista a descobrir o poder máximo de sua fórmula!​
//Obs.:NÂO utlize a função pronta da linguagem

#include <stdio.h>

// Função que calcula a potência manualmente
int calcularPotencia(int base, int expoente) {
    int i, resultado = 1;

    printf("Estou na funcao!\n");

    for(i = 0; i < expoente; i++) {
        resultado *= base;
    }

    printf("saindo da funcao!\n");
    return resultado;
}

int main() {
    int qtd, i, base, expoente, resultado;

    printf("Quantas formulas deseja calcular?:\n");
    scanf("%d", &qtd);

    for(i = 1; i <= qtd; i++) {
        printf("conjunto %d:\n", i);

        printf("Digite a base:\n");
        scanf("%d", &base);

        printf("Digite o expoente:\n");
        scanf("%d", &expoente);

        printf("Chamando a funcao!\n");
        resultado = calcularPotencia(base, expoente);
        printf("Voltou da funcao\n");

        printf("%d elevado a %d = %d\n", base, expoente, resultado);
    }

    return 0;
}

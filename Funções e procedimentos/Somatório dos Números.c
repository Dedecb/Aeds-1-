//2 - Versão 02 - Somatório de Números: "Imagine que você está criando um contador mágico que pode somar todos os números de 1 até qualquer número que você escolher. Sua tarefa é pedir, no programa principal, ao usuário um número inteiro e positivo, e programar um procedimento utilizando o número lido no programa principal, calcule e mostre o somatório de 1 até esse número. Utilize loops para tornar a magia possível!"

#include <stdio.h>

void somatorio(int n) {
    int i, soma = 0;

    printf("Estou no procedimento!\n");

    for (i = 1; i <= n; i++) {
        soma += i;
    }

    printf("Soma de 1 ate %d = %d\n", n, soma);
    printf("saindo do procedimento!\n");
}

int main() {
    int qtd, i, valor;

    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++) {
        printf("Digite o %d valor:\n", i);
        scanf("%d", &valor);
        printf("Chamando o procedimento!\n");
        somatorio(valor);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}


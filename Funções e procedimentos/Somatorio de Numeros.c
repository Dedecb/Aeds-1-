//Versão 01 - Somatório de Números:
//"Imagine que você está criando um contador mágico que pode somar todos os números de 1 até qualquer número que você escolher. Sua tarefa é programar um procedimento
//que peça ao usuário um número inteiro e positivo e, em seguida, calcule e mostre o somatório de 1 até esse número. Utilize loops para tornar a magia possível!"

#include <stdio.h>

void Nsoma() {
    int n, soma = 0;

    printf("Estou no procedimento!\n");
    printf("Digite um valor:\n");
    scanf("%d", &n);

    for (int contador = 1; contador <= n; contador++) {
        soma += contador;
    }

    printf("Soma de 1 ate %d = %d\n", n, soma);
    printf("saindo do procedimento!\n");
}

int main() {
    int qntd;

    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &qntd);

    for (int i = 1; i <= qntd; i++) {
        printf("Chamando o procedimento!\n");
        Nsoma();
        printf("Voltou do procedimento!\n");
    }

    return 0;
}




//Dobro Mágico:​ Um mago precisa de sua ajuda para duplicar o poder de poções mágicas! Crie um procedimento chamado dobrarPoder que receba a quantidade de poder de uma porção e, ao ser chamado, exiba o dobro desse valor. Ajude o mago a potencializar suas porções!​

#include <stdio.h>

void dobrarPoder(int valor) {
    printf("Estou no procedimento!\n");
    printf("O dobro de %d = %d\n", valor, valor * 2);
    printf("saindo do procedimento!\n");
}

int main() {
    int n, i, valor;

    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite um valor:\n");
        scanf("%d", &valor);
        printf("Chamando o procedimento com o parametro %d!\n", valor);
        dobrarPoder(valor);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}

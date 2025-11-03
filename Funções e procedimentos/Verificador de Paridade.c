//Verificador de Números Mágicos Em um antigo templo, apenas números pares podem abrir as portas mágicas. Crie um procedimento chamado verificarParidade que receba um número e devolva em outro parametro se ele é "Par" ou "Impar". Ajude a abrir as portas do templo com os números corretos!​

#include <stdio.h>
#include <string.h>

// procedimento que verifica a paridade
void verificarParidade(int numero, char *resultado) {
    printf("Estou no procedimento!\n");

    if (numero % 2 == 0)
        strcpy(resultado, "par");
    else
        strcpy(resultado, "impar");

    printf("saindo do procedimento!\n");
}

int main() {
    int qtd, i, num;
    char resultado[10];

    printf("Quantos numeros voce deseja verificar?:\n");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++) {
        printf("Digite um valor:\n");
        scanf("%d", &num);

        printf("Chamando o procedimento!\n");
        verificarParidade(num, resultado);
        printf("Voltou do procedimento!\n");

        printf("O numero %d : %s\n", num, resultado);
    }

    return 0;
}

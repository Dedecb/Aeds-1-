//Adivinhe a Palavra Secreta:​Um espião precisa descobrir o número de letras de uma sentença secreta. - máximo 50 caracteres Crie uma funcao chamada contarLetras que receba uma sentença e retorne quantas letras ela possui. (A..Z,a..z) Ajude o espião a decifrar a mensagem secreta!​ dica em C: utilize: scanf(" %99[^\n\r]", palavra); para ler a palavra

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarLetras(char palavra[]) {
    int i, contador = 0;

    printf("Estou na funcao!\n");

    for (i = 0; palavra[i] != '\0'; i++) {
        if ((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <= 'z')) {
            contador++;
        }
    }

    printf("saindo da funcao!\n");

    return contador;
}

int main() {
    int qtd, i, letras;
    char palavra[100];

    printf("Quantas sentencas voce deseja contar as letras?:\n");
    scanf("%d", &qtd);
    getchar(); // limpa o enter deixado pelo scanf

    for (i = 1; i <= qtd; i++) {
        printf("Digite a %d sentenca:\n", i);
        scanf(" %[^\n\r]", palavra);
        printf("Chamando a funcao!\n");
        letras = contarLetras(palavra);
        printf("Voltou da funcao!\n");
        printf("A sentenca %s possui %d letra", palavra, letras);
        if (letras != 1)
            printf("s\n");
        else
            printf("\n");
    }

    return 0;
}

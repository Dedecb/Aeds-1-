//Em um torneio de magia, os juízes dão notas para as apresentações. Crie uma função chamada calcularMedia que receba as notas de dois juízes e retorne a média final que será exibida no programa principal. Ajude a calcular a pontuação justa para cada apresentação!​

#include <stdio.h>

float calcularMedia(float n1, float n2) {
    float media;

    printf("Estou na funcao!\n");
    media = (n1 + n2) / 2;
    printf("saindo da funcao!\n");

    return media;
}

int main() {
    int qtd, i;
    float nota1, nota2, media;

    printf("Quantos apresentacoes foram realizadas?:\n");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++) {
        printf("Digite as notas da %d apresentacao:\n", i);
        scanf("%f", &nota1);
        scanf("%f", &nota2);
        printf("Chamando a funcao!\n");
        media = calcularMedia(nota1, nota2);
        printf("Voltou da funcao!\n");
        printf("Media final:%.2f\n", media);
    }

    return 0;
}


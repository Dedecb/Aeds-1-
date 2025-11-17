//Média de Números:
//Enunciado: "Ajude um cientista de dados a calcular a média de um conjunto de números que ele coleta diariamente.
//Desenvolva um procedimento que leia um conjunto indeterminado de valores (FLAG valor negativo), calcule a média NO procedimento e exiba o resultado NO programa principal.
//Use sua habilidade com loops e variáveis para facilitar o trabalho do cientista!"

#include <stdio.h>

void media_conjunto(float *media){
    int valor;
    int cont = 0;
    int soma = 0;

    printf("Estou no procedimento!\n");

    while(1){
        printf("Digite um valor (FLAG valor negativo)\n");
        scanf("%d", &valor);

        if(valor < 0){
            break;
        }

        soma += valor;
        cont++;
    }

    if(cont == 0){
        *media = 0;
    } else {
        *media = (float)soma / cont;
    }

    printf("saindo do procedimento!\n");
}

int main(){
    int n, i;
    float media;

    printf("Quantos conjuntos voce deseja?:\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("Chamando o procedimento!\n");

        media_conjunto(&media);

        printf("Voltou do procedimento!\n");

        printf("A media do %d conjunto foi:%.3f\n", i, media);
    }

    return 0;
}

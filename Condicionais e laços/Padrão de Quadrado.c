//Padrão de Triângulo de Estrelas
//Imagine que você é um arquiteto responsável por criar um design de iluminação para um evento comunitário ao ar livre.
//Seu desafio é desenvolver um programa que possa “desenhar” um modelo de triângulos de estrelas que represente suas ideias de forma artística e visualmente apelativa.
//Com este programa, os organizadores podem projetar padrões de luzes cintilando no céu noturno, proporcionando aos moradores locais um espetáculo de luz memorável!

#include <stdio.h>

int main(){
    int lado, altura = 1, tamanho;
    char tipo;

    printf("Digite o tamanho do lado do quadrado:\n");
    scanf("%d", &lado);
    printf("Digite o caracter para formar o quadrado:\n");
    scanf(" %c", &tipo);

    while(altura <= lado){
        tamanho = 1;
        while(tamanho <= lado){
            printf("%c ", tipo);
            tamanho++;
        }
        printf("\n");
        altura++;
    }
return 0;
}

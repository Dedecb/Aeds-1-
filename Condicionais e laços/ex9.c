//Padr�o de Tri�ngulo de Estrelas
//Imagine que voc� � um arquiteto respons�vel por criar um design de ilumina��o para um evento comunit�rio ao ar livre.
//Seu desafio � desenvolver um programa que possa �desenhar� um modelo de tri�ngulos de estrelas que represente suas ideias de forma art�stica e visualmente apelativa.
//Com este programa, os organizadores podem projetar padr�es de luzes cintilando no c�u noturno, proporcionando aos moradores locais um espet�culo de luz memor�vel!

#include <stdio.h>

int main() {
    int n;

    printf("Digite a altura do triangulo de estrelas:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {       // controla as linhas
        for (int j = 1; j <= i; j++) {   // controla as colunas (número de estrelas)
            printf("*");
        }
        printf("\n"); // quebra de linha ao final de cada linha de estrelas
    }

    return 0;
}
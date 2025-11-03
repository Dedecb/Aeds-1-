//10 - Desafio do Decifrador de Mensagens: Você foi convocado para ajudar um renomado detetive a decifrar mensagens secretas enviadas por criminosos.(max 150 caracteres) Essas mensagens são compostas por frases enigmáticas, e sua missão é separar cada palavra da frase para que o detetive possa analisar uma por uma.​ As palavras são separadas por espaço, virgula, ponto final, ponto e virgula,ponto de esclamação e ponto de interrogação Crie um procedimento chamado separaPalavras que receba uma frase como parâmetro imprima cada palavra em uma linha.​
//Dica: Utilize em C: scanf(" %99[^\n\r]", palavra); para ler a palavra

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void separaPalavras(char frase[]) {
    int i = 0;
    char palavra[150];
    int j = 0;

    printf("Estou no procedimento!\n");

    while (frase[i] != '\0') {
        // Se o caractere não é delimitador, adiciona à palavra
        if (frase[i] != ' ' && frase[i] != ',' && frase[i] != '.' &&
            frase[i] != ';' && frase[i] != '!' && frase[i] != '?') {
            palavra[j++] = frase[i];
        } else {
            // delimitador encontrado, imprime a palavra se não estiver vazia
            if (j > 0) {
                palavra[j] = '\0';
                printf("%s\n", palavra);
                j = 0;
            }
        }
        i++;
    }
    // imprime a última palavra se houver
    if (j > 0) {
        palavra[j] = '\0';
        printf("%s\n", palavra);
    }

    printf("saindo do procedimento!\n");
}

int main() {
    int qtd, i;
    char frase[150];

    printf("Quantas mensagens deseja decifrar?:\n");
    scanf("%d", &qtd);
    getchar(); // limpar buffer

    for (i = 1; i <= qtd; i++) {
        printf("conjunto %d:\n", i);
        printf("Digite a %d mensagem secreta:\n", i);
        scanf(" %149[^\n\r]", frase);

        printf("Chamando o procediemnto!\n");
        separaPalavras(frase);
        printf("Voltou do procedimento\n");
    }

    return 0;
}

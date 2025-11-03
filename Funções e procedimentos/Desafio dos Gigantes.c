//Desafio dos Gigantes:​Dois gigantes estão competindo para ver quem é o mais forte. Crie um procedimento chamado compararForca que receba a força de dois gigantes e exiba qual deles é o mais forte, ou se ambos têm a mesma força. Descubra quem será o vencedor desse duelo épico!​

#include <stdio.h>

// procedimento para comparar as forças
void compararForca(int forca1, int forca2) {
    printf("Estou no procedimento!\n");

    if (forca1 > forca2)
        printf("%d > %d\n", forca1, forca2);
    else if (forca1 < forca2)
        printf("%d < %d\n", forca1, forca2);
    else
        printf("%d igual a %d\n", forca1, forca2);

    printf("saindo do procedimento!\n");
}

int main() {
    int qtd, i, f1, f2;

    printf("Quantos conjuntos voce deseja verificar?:\n");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++) {
        printf("conjunto %d:\n", i);
        printf("Digite a forca do 1 gigante:\n");
        scanf("%d", &f1);
        printf("Digite a forca do 2 gigante:\n");
        scanf("%d", &f2);

        printf("Chamando o procedimento!\n");
        compararForca(f1, f2);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}


//A Jornada dos Números Par e Ímpar
//Prepare-se para uma jornada através do reino dos números! Leia uma lista de 20 números, representando as criaturas que habitam este reino. Para cada criatura, determine se ela pertence ao clã dos Pares ou dos Ímpares e registre essa informação em uma segunda lista. mostre as duas listas - primeiro dos clas pares e depois dos clas impares! Ajude a manter a paz entre os clãs!

#include <stdio.h>

int main() {
    int numeros[20];
    int i, qtdPares = 0, qtdImpares = 0;
    int pares[20], impares[20];

    printf("Digite os 20 elementos:\n");

    for (i = 0; i < 20; i++) {
        printf("Digite o %d representante:\n", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Mostrar todos os representantes
    printf("Representantes dos clas:");
    for (i = 0; i < 20; i++) {
        if (i != 0) printf(",");
        printf("%d", numeros[i]);
    }
    printf(".\n");

    // Separar pares e ímpares
    for (i = 0; i < 20; i++) {
        if (numeros[i] % 2 == 0) {
            pares[qtdPares++] = numeros[i];
        } else {
            impares[qtdImpares++] = numeros[i];
        }
    }

    // Mostrar lista de pares
    printf("Representante   CLA Par\n");
    for (i = 0; i < qtdPares; i++) {
        printf("     %d         PAR\n", pares[i]);
    }

    // Mostrar lista de ímpares
    printf("Representante   CLA Impar\n");
    for (i = 0; i < qtdImpares; i++) {
        printf("     %d         IMPAR\n", impares[i]);
    }

    return 0;
}

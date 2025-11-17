//Somatório de Números:
//"Imagine que você está criando um contador mágico que pode somar todos os números de 1 até qualquer número que você escolher. Sua tarefa é pedir, no programa principal,
//ao usuário um número inteiro e positivo, e programar um procedimento utilizando o número lido no programa principal, calcule e mostre o somatório de 1 até esse número.
//Utilize loops para tornar a magia possível!"

#include <stdio.h>

void Nsoma(int num){
    int soma = 0;

    printf("Estou no procedimento!\n");

    for(int contador = 1; contador <= num; contador ++){
        soma += contador;
    }

    printf("Soma de 1 ate %d = %d\n", num, soma);
    printf("saindo do procedimento!\n");
}


int main(){
    int qntd, n;

    printf("Quantos numeros voce deseja?:\n");
    scanf("%d", &qntd);
    for(int i = 1; i<= qntd; i++){
        printf("Digite o 1 valor:\n");
        scanf("%d", &n);

        printf("Chamando o procedimento!\n");

        Nsoma(n);

        printf("Voltou do procedimento!\n");
}

return 0;
}

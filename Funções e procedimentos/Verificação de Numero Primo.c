//Verificação de Número Primo:
//Enunciado: "Você está criando um programa para um festival de números, onde os participantes podem verificar se seus números favoritos são primos.
//Desenvolva um procedimento que receba um número do usuário lido NO programa principal, verifique se ele é primo e exiba NO procedimento uma mensagem informando o resultado. [
//Utilize sua lógica para identificar os divisores corretamente!

#include <stdio.h>

void verifica_primo(int num){
    int i, cont = 0;

    printf("Estou no procedimento!\n");

    if(num <= 1){
        printf("Numero %d nao eh primo!\n", num);
        printf("saindo do procedimento!\n");
        return;
    }

    for(i = 1; i <= num; i++){
        if(num % i == 0){
            cont++;
        }
    }

    if(cont == 2){
        printf("Numero %d eh primo!\n", num);
    } else {
        printf("Numero %d nao eh primo!\n", num);
    }

    printf("saindo do procedimento!\n");
}

int main(){
    int n, num, i;

    printf("Quantos numero voce deseja verificar?:\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("Digite o %d numero a ser verificado:\n", i);

        scanf("%d", &num);

        printf("Chamando o procedimento!\n");
        verifica_primo(num);
        printf("Voltou do procedimento!\n");
    }

    return 0;
}

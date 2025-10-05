//Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo do tipo do
//consumidor - residencial, comercial ou industrial. A regra para calcular a conta e:
//• Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3 gastos;
//• Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 5,50 por m3 gastos acima dos 80 m3;
//• Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 8,00 por m3 gastos acima dos 100 m3;
//O algoritmo devera ler a conta do cliente, seu tipo (residencial, comercial e industrial) e o seu consumo de água em metros cubos.
//Como resultado imprimir o valor a ser pago pelo mesmo.

#include <stdio.h>

int main() {
    int tipo;
    float consumo, valorConta;

    printf("Digite o tipo de consumidor (1-Residencial, 2-Comercial, 3-Industrial): ");
    scanf("%d", &tipo);
    printf("Digite o consumo de agua em metros cubicos: ");
    scanf("%f", &consumo);

    switch (tipo) {
        case 1: // Residencial
            valorConta = 75.00 + (3.50 * consumo);
            break;
        case 2: // Comercial
            if (consumo <= 80) {
                valorConta = 500.00;
            } else {
                valorConta = 500.00 + (5.50 * (consumo - 80));
            }
            break;
        case 3: // Industrial
            if (consumo <= 100) {
                valorConta = 800.00;
            } else {
                valorConta = 800.00 + (8.00 * (consumo - 100));
            }
            break;
        default:
            printf("Tipo de consumidor invalido.\n");
            return 1;
    }

    printf("O valor da conta de agua e: R$ %.2f\n", valorConta);
    return 0;
}
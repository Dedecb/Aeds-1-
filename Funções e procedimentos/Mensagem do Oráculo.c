//Mensagem do Oraculo:​O oraculo precisa enviar uma mensagem personalizada para cada pessoa que consulta sua sabedoria. Crie um procedimento chamado mensagemOraculo que receba o nome (max 50) e seu data de nascimento (dd/mm/aaaa) de uma pessoa e devolva em outro parametro uma mensagem como "Ola, [Nome]! Voce tem [Idade] anos.". Ajude o oraculo a impressionar seus visitantes!
//Obs.: peça no Programa principal a data atual!​
//Dica: Utilize em C: scanf(" %99[^\n\r]", palavra); para ler a frase
//Dica: pesquise sobre sscanf
//em C# utlize:
//DateTime dataNascimento;
//if (!DateTime.TryParseExact(dnasc, "dd/MM/yyyy", null, System.Globalization.DateTimeStyles.None, out dataNascimento))
//        {
//            msg = $"Data inválida: {dnasc}";
//            return;
//       }

#include <stdio.h>
#include <string.h>

void mensagemOraculo(char nome[], char dataNasc[], char mensagem[], int diaAtual, int mesAtual, int anoAtual) {
    int dia, mes, ano;
    int idade;

    printf("Estou no procedimento!\n");

    sscanf(dataNasc, "%d/%d/%d", &dia, &mes, &ano);

    idade = anoAtual - ano;
    if (mesAtual < mes || (mesAtual == mes && diaAtual < dia)) {
        idade--; // ainda não fez aniversário este ano
    }

    sprintf(mensagem, "Ola %s! Voce tem %d anos!", nome, idade);

    printf("saindo do procedimento!\n");
}

int main() {
    int diaAtual, mesAtual, anoAtual;
    int qtd, i;
    char nome[100], dataNasc[20], mensagem[150];

    printf("Digite a data atual no formato dd/mm/aaaa:\n");
    scanf("%d/%d/%d", &diaAtual, &mesAtual, &anoAtual);

    printf("Quantas mensagens deseja enviar?:\n");
    scanf("%d", &qtd);
    getchar(); // limpar buffer

    for (i = 1; i <= qtd; i++) {
        printf("conjunto %d:\n", i);

        printf("Digite o nome:\n");
        scanf(" %99[^\n\r]", nome);

        printf("Digite a data de nascimento formato dd/mm/aaaa:\n");
        scanf(" %99[^\n\r]", dataNasc);

        printf("Chamando o procedimento!\n");
        mensagemOraculo(nome, dataNasc, mensagem, diaAtual, mesAtual, anoAtual);
        printf("Voltou do procedimento!\n");

        printf("%s\n", mensagem);
    }

    return 0;
}

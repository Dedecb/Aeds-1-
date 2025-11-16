//Tabuada de Multiplicação
//Você foi contratado como assistente de ensino em uma escola primária, e sua primeira tarefa é impressionar os alunos com a importância da matemática em nossa vida diária!
//Programe um software interativo que permita aos alunos explorar a tabuada de qualquer número à sua escolha, de maneira rápida e divertida.
//Esse software ajudará as crianças a se prepararem para compreensões mais profundas de matemática e a verem a prática de multiplicação como uma brincadeira, aumentando sua destreza numérica!

#include <stdio.h>

int main(){
    int n, result;

    printf("Digite um numero para ver sua tabuada:\n");
    scanf("%d", &n);
    for(int i = 1; i < 11; i++){
        result = n * i;
        printf("%d X %d = %d\n", n, i, result);
    }

return 0;
}

/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1028
Data : 07/06/2026
Objetivo : Resolver o problema do MDC (Máximo Divisor Comum) usando recursão
com o algoritmo de Euclides.
Aprendizado : Aprendi a aplicar recursão em problemas matemáticos clássicos,
como o cálculo do MDC.
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */

#include <stdio.h>

//Função recursiva para MDC (Algoritmo de Euclides)
int mdc(int a, int b){
if(b == 0){
return a;
}
return mdc(b, a % b);
}

int main(){
//Declaração de variáveis
int N, a, b;

//Processamento das entradas
scanf("%d", &N);

while(N--){
    scanf("%d %d", &a, &b);

    //Processamento e saída
    printf("%d\n", mdc(a, b));
}

return 0;
}

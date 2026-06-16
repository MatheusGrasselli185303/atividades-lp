/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1029
Data : 07/06/2026
Objetivo : Calcular o número de chamadas recursivas na sequência de Fibonacci,
contabilizando quantas chamadas são feitas e quantos "calls" são executados.
Aprendizado : Aprendi a implementar recursão em C e a contar chamadas recursivas
utilizando variáveis globais ou parâmetros auxiliares.
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */

#include <stdio.h>

//Contadores globais
int chamadasFib, chamadasCall;

int fib(int n){
chamadasCall++;

if(n == 0){
    chamadasFib++;
    return 0;
}
if(n == 1){
    chamadasFib++;
    return 1;
}

return fib(n - 1) + fib(n - 2);
}

int main(){
//Declaração de variáveis
int N, X, resultado;

//Processamento das entradas
scanf("%d", &N);

while(N--){
    scanf("%d", &X);

    chamadasFib = 0;
    chamadasCall = 0;

    //Processamento
    resultado = fib(X);

    //Saída
    printf("fib(%d) = %d calls = %d\n", X, chamadasCall - 1, chamadasFib);
}

return 0;
}


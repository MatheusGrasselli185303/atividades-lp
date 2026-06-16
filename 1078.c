/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1078
Data : 03/06/2026
Objetivo : Ler um valor inteiro N e imprimir a tabuada de 1 a 10 desse número.
Aprendizado : Aprendi a utilizar estruturas de repetição.
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
//Declaração de variáveis
int N, i;

//Processamento das entradas
scanf("%d", &N);

//Processamento
for(i = 1; i <= 10; i++){
    printf("%d x %d = %d\n", i, N, i * N);
}

return 0;
}

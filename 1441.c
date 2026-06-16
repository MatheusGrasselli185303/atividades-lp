/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1441
Data : 08/06/2026
Objetivo : Encontrar o maior valor de uma sequência usando recursão,
finalizando quando o valor de entrada for 0.
Aprendizado : Aprendi a aplicar recursão para processamento de sequência de
valores sem uso de laços explícitos.
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */

#include <stdio.h>

int maior(int atual){
int prox;

scanf("%d", &prox);

if(prox == 0){
    return atual;
}

if(prox > atual){
    atual = prox;
}

return maior(atual);
}

int main(){
//Declaração de variáveis
int x;

//Processamento das entradas
scanf("%d", &x);

//Processamento e saída
printf("%d\n", maior(x));

return 0;
}


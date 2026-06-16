/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1046
Data : 05/06/2026
Objetivo : Calcular a duração de um jogo em horas, considerando que pode
ultrapassar a meia noite.
Aprendizado : Aprendi a lidar com lógica condicional para intervalos de tempo
que cruzam o limite de 24 horas.
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */

#include <stdio.h>

//Função para calcular duração do jogo
int calcularDuracao(int inicio, int fim){
if(inicio == fim){
return 24;
}
if(fim > inicio){
return fim - inicio;
}
return (24 - inicio) + fim;
}

int main(){
//Declaração de variáveis
int inicio, fim, duracao;

//Processamento das entradas
scanf("%d %d", &inicio, &fim);

//Processamento
duracao = calcularDuracao(inicio, fim);

//Processamento das saídas
printf("O JOGO DUROU %d HORA(S)\n", duracao);

return 0;
}

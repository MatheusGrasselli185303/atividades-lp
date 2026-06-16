/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1017
Data : 05/06/2026
Objetivo : Calcular a quantidade de litros de combustível necessária para uma viagem,
considerando tempo e velocidade média.
Aprendizado : Aprendi a criar funções em C para modularizar cálculos simples e melhorar
a organização do código.
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */

#include <stdio.h>

//Função para calcular litros de combustível
float calcularLitros(int tempo, int velocidade){
float distancia = tempo * velocidade;
return distancia / 12.0;
}

int main(){
//Declaração de variáveis
int tempo, velocidade;
float litros;

//Processamento das entradas
scanf("%d %d", &tempo, &velocidade);

//Processamento
litros = calcularLitros(tempo, velocidade);

//Processamento das saídas
printf("%.3f\n", litros);

return 0;
}

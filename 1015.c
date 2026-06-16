/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1015
Data : 04/06/2026
Objetivo : Calcular a distância entre dois pontos no plano cartesiano.
Aprendizado : Aprendi a aplicar a fórmula da distância entre dois pontos usando
operações matemáticas básicas em C.
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

int main(){
//Declaração de variáveis
double x1, y1, x2, y2, distancia;

//Processamento das entradas
scanf("%lf %lf", &x1, &y1);
scanf("%lf %lf", &x2, &y2);

//Processamento
distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

//Processamento das saídas
printf("%.4lf\n", distancia);

return 0;
}

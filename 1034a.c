/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1534
Data : 04/06/2026
Objetivo : Imprimir uma matriz com padrão de 1, 2 e 3 em formato espelhado.
Aprendizado : Aprendi a manipular matrizes e construir padrões.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
//Declaração de variáveis
int N, i, j;
int M[101][101];

//Processamento das entradas
while(scanf("%d", &N) != EOF){

    //Processamento
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(i == j){
                M[i][j] = 2;
            }else if(j == N - i - 1){
                M[i][j] = 3;
            }else{
                M[i][j] = 1;
            }
        }
    }

    //Processamento das saídas
    for(i = 0; i < N; i++){
        for

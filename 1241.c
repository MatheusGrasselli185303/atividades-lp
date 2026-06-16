/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1241
Data : 03/06/2026
Objetivo : Verificar se uma string termina com outra string (comparação de sufixo).
Aprendizado :
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main(){
//Declaração de variáveis
int N, i, lenA, lenB, ok;
char A[1000], B[1000];

//Processamento das entradas
scanf("%d", &N);

for(i = 0; i < N; i++){
    scanf("%s %s", A, B);

    lenA = strlen(A);
    lenB = strlen(B);

    ok = 1;

    //Se B é maior que A, não pode ser sufixo
    if(lenB > lenA){
        ok = 0;
    }else{
        //Comparar do final
        for(int j = 0; j < lenB; j++){
            if(A[lenA - lenB + j] != B

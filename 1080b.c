/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1080
Data : 09/06/2026
Objetivo : Ler 100 números inteiros, armazenar em um vetor e encontrar o maior valor e sua posição.
Aprendizado : Aprendi a utilizar vetores para armazenar múltiplos valores e depois percorrê-los para encontrar informações específicas.
Pergunta de segunda ordem: Em quais situações o uso de vetores é mais eficiente do que processamento direto na entrada?
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
//Declaração de variáveis
int V[100];
int i, maior, posicao;

//Processamento das entradas
for(i = 0; i < 100; i++){
    scanf("%d", &V[i]);
}

//Inicialização
maior = V[0];
posicao = 1;

//Processamento
for(i = 1; i < 100; i++){
    if(V[i] > maior){
        maior = V[i];
        posicao = i + 1;
    }
}

//Processamento das saídas
printf("%d\n%d\n", maior, posicao);

return 0;
}

/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1253
Data : 03/06/2026
Objetivo : Descriptografar mensagens usando deslocamento de caracteres (Cifra de César).
Aprendizado : Aprendi a manipular códigos ASCII.
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main(){
//Declaração de variáveis
int N, i, j, K;
char texto[60];

//Processamento das entradas
scanf("%d", &N);

for(i = 0; i < N; i++){
    scanf("%s", texto);
    scanf("%d", &K);

    //Processamento
    for(j = 0; texto[j] != '\0'; j++){
        char c = texto[j] - K;

        if(c < 'A'){
            c = c + 26;
        }

        texto[j] = c;
    }

    //Processamento das saídas
    printf("%s\n", texto);
}

return 0;
}

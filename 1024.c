/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1024
Data : 04/06/2026
Objetivo : Criptografar uma string em três etapas:
1) deslocar letras em +3 posições na tabela ASCII
2) inverter a string
3) deslocar a segunda metade em -1
Aprendizado : Aprendi a combinar múltiplas transformações em strings e a controlar
índices para manipulação de caracteres.
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
//Declaração de variáveis
int N, i, j, len;
char linha[1100];

//Processamento das entradas
scanf("%d", &N);
getchar();

for(i = 0; i < N; i++){
    fgets(linha, sizeof(linha), stdin);

    //remove '\n'
    len = strlen(linha);
    if(linha[len - 1] == '\n'){
        linha[len - 1] = '\0';
        len--;
    }

    //Etapa 1: +3 em letras
    for(j = 0; j < len; j++){
        if((linha[j] >= 'A' && linha[j] <= 'Z') || (linha[j] >= 'a' && linha[j] <= 'z')){
            linha[j] = linha[j] + 3;
        }
    }

    //Etapa 2: inverter string
    for(j = 0; j < len / 2; j++){
        char temp = linha[j];
        linha[j] = linha[len - 1 - j];
        linha[len - 1 - j] = temp;
    }

    //Etapa 3: -1 na segunda metade
    for(j = len / 2; j < len; j++){
        linha[j] = linha[j] - 1;
    }

    //Saída
    printf("%s\n", linha);
}

return 0;
}


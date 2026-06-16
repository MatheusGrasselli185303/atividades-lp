/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1234
Data : 02/06/2026
Objetivo : Ler frases e transformar cada letra em formato “sentença dançante”,
alternando maiúsculas e minúsculas, ignorando espaços.
Aprendizado : Aprendi a manipular strings caractere por caractere e a controlar
alternância de letras ignorando espaços.
Pergunta de segunda ordem: Como posso aplicar manipulação de caracteres para
criar outros padrões de formatação automática de texto?
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
//Declaração de variáveis
char linha[1000];
int i, flag;

//Processamento das entradas
while(fgets(linha, sizeof(linha), stdin) != NULL){

    //Inicialização
    flag = 1; //1 = maiúscula, 0 = minúscula

    //Processamento
    for(i = 0; linha[i] != '\0'; i++){

        if(linha[i] == '\n'){
            break;
        }

        if(linha[i] == ' '){
            printf(" ");
        }
        else{
            if(flag){
                printf("%c", toupper(linha[i]));
                flag = 0;
            }else{
                printf("%c", tolower(linha[i]));
                flag = 1;
            }
        }
    }

    printf("\n");
}

return 0;
}

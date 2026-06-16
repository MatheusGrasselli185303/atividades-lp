/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1258
Data : 06/06/2026
Objetivo : Ordenar camisetas por cor e tamanho usando struct e critérios
personalizados de comparação.
Aprendizado : Aprendi a utilizar struct para agrupar dados relacionados e
implementar ordenação com múltiplos critérios.
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
char nome[100];
char cor[20];
char tamanho;
} Camiseta;

//Função de comparação para ordenação
int comparar(const void *a, const void *b){
Camiseta *c1 = (Camiseta *)a;
Camiseta *c2 = (Camiseta *)b;

if(strcmp(c1->cor, c2->cor) != 0){
    return strcmp(c1->cor, c2->cor);
}

if(c1->tamanho != c2->tamanho){
    return c2->tamanho - c1->tamanho; // ordem decrescente do tamanho
}

return strcmp(c1->nome, c2->nome);
}

int main(){
//Declaração de variáveis
int N, i;
Camiseta c[60];

//Processamento das entradas
while(scanf("%d", &N) && N != 0){

    for(i = 0; i < N; i++){
        scanf(" %[^\n]", c[i].nome);
        scanf("%s %c", c[i].cor, &c[i].tamanho);
    }

    //Processamento
    qsort(c, N, sizeof(Camiseta), comparar);

    //Saída
    for(i = 0; i < N; i++){
        printf("%s %c %s\n", c[i].cor, c[i].tamanho, c[i].nome);
    }

    printf("\n");
}

return 0;
}

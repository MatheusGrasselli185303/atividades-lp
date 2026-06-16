/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1080
Data : 02/06/2026
Objetivo : Ler 100 números inteiros e identificar o maior valor e sua posição.
Aprendizado : Aprendi a comparar valores sequenciais e armazenar o maior elemento encontrado durante a leitura.
Pergunta de segunda ordem: Como posso adaptar a lógica de busca do maior valor para trabalhar com grandes volumes de dados em tempo real?
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
//Declaração de variáveis
int i, valor, maior, posicao;

//Processamento das entradas
scanf("%d", &valor);
maior = valor;
posicao = 1;

//Processamento
for(i = 2; i <= 100; i++){
    scanf("%d", &valor);

    if(valor > maior){
        maior = valor;
        posicao = i;
    }
}

//Processamento das saídas
printf("%d\n%d\n", maior, posicao);

return 0;
}

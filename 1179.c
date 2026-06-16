/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1179
Data : 06/06/2026
Objetivo : Ler 15 números inteiros e separá-los em dois vetores:
pares e ímpares, imprimindo quando cada um atingir 5 elementos.
Aprendizado : Aprendi a trabalhar com vetores, controle de tamanho e lógica de
armazenamento condicional.
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
//Declaração de variáveis
int valor;
int par[5], impar[5];
int iPar = 0, iImpar = 0;
int i;

//Processamento das entradas e lógica
for(i = 0; i < 15; i++){
    scanf("%d", &valor);

    if(valor % 2 == 0){
        par[iPar++] = valor;

        if(iPar == 5){
            for(int j = 0; j < 5; j++){
                printf("par[%d] = %d\n", j, par[j]);
            }
            iPar = 0;
        }
    }else{
        impar[iImpar++] = valor;

        if(iImpar == 5){
            for(int j = 0; j < 5; j++){
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            iImpar = 0;
        }
    }
}

//Restantes pares
for(int j = 0; j < iImpar; j++){
    printf("impar[%d] = %d\n", j, impar[j]);
}

//Restantes ímpares
for(int j = 0; j < iPar; j++){
    printf("par[%d] = %d\n", j, par[j]);
}

return 0;
}

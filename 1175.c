/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Matheus Grasselli dos Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 12/06/2026
Objetivo    : Reforçar o uso de vetores realizando a inversão dos elementos
              armazenados em um array.
Aprendizado : Aprendi a manipular posições de um vetor e a trocar valores
              entre elementos para inverter sua ordem.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int N[20];

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &N[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        int aux = N[i];
        N[i] = N[19 - i];
        N[19 - i] = aux;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}

/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB
Nome        : Matheus Grasselli dos Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 12/06/2026
Objetivo    : Reforçar a busca em vetores encontrando o menor valor e sua
              respectiva posição.
Aprendizado : Aprendi a percorrer um vetor para localizar elementos que
              atendem a uma condição e armazenar informações relevantes
              durante a busca.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int menor = x[0];
    int posicao = 0;

    for (int i = 1; i < n; i++)
    {
        if (x[i] < menor)
        {
            menor = x[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}

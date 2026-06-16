/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB
Nome        : Matheus Grasselli dos Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 12/06/2026
Objetivo    : Resolver o Problema de Josephus determinando a posição do
              sobrevivente em um círculo de pessoas.
Aprendizado : Aprendi a utilizar uma solução iterativa baseada em recorrência
              para encontrar o sobrevivente sem simular todas as eliminações.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int caso = 1; caso <= t; caso++)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        int sobrevivente = 0;

        for (int i = 1; i <= n; i++)
        {
            sobrevivente = (sobrevivente + k) % i;
        }

        printf("Case %d: %d\n", caso, sobrevivente + 1);
    }

    return 0;
}

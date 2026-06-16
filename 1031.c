/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Matheus Grasselli dos Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 12/06/2026
Objetivo    : Determinar o menor valor de m para que a região 13 seja a
              última eliminada no processo circular.
Aprendizado : Aprendi a simular eliminações em estruturas circulares e a
              testar valores até encontrar uma condição específica.
-------------------------------------------------------------------------- */

#include <stdio.h>

int josephus(int n, int m)
{
    int pos = 0;

    for (int i = 2; i < n; i++)
    {
        pos = (pos + m) % i;
    }

    return pos;
}

int main()
{
    int n;

    while (scanf("%d", &n) && n)
    {
        int m = 1;

        while (1)
        {
            if (josephus(n, m) == 11)
            {
                printf("%d\n", m);
                break;
            }

            m++;
        }
    }

    return 0;
}

/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB
Nome        : Matheus Grasselli dos Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 12/06/2026
Objetivo    : Reforçar o uso de matrizes através da construção de uma matriz
              quadrada com camadas concêntricas de valores.
Aprendizado : Aprendi a preencher matrizes utilizando padrões e a calcular
              valores com base na posição de cada elemento.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) && n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int valor = i;

                if (j < valor)
                    valor = j;
                if (n - 1 - i < valor)
                    valor = n - 1 - i;
                if (n - 1 - j < valor)
                    valor = n - 1 - j;

                valor++;

                if (j == 0)
                    printf("%3d", valor);
                else
                    printf(" %3d", valor);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}

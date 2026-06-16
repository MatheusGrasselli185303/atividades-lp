/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB
Nome        : Matheus Grasselli dos Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 12/06/2026
Objetivo    : Reforçar o uso de matrizes realizando a análise dos elementos
              vizinhos em uma grade bidimensional.
Aprendizado : Aprendi a percorrer matrizes utilizando índices de linhas e
              colunas e a verificar posições adjacentes para calcular valores.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int n, m;

    while (scanf("%d %d", &n, &m) != EOF)
    {
        int mat[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 1)
                {
                    printf("9");
                }
                else
                {
                    int soma = 0;

                    if (i > 0)
                        soma += mat[i - 1][j];
                    if (i < n - 1)
                        soma += mat[i + 1][j];
                    if (j > 0)
                        soma += mat[i][j - 1];
                    if (j < m - 1)
                        soma += mat[i][j + 1];

                    printf("%d", soma);
                }
            }

            printf("\n");
        }
    }

    return 0;
}

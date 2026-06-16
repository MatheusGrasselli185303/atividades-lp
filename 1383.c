/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB
Nome        : Matheus Grasselli dos Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 12/06/2026
Objetivo    : Verificar se uma matriz 9x9 representa uma solução válida de
              Sudoku.
Aprendizado : Aprendi a utilizar matrizes para representar problemas reais,
              percorrer linhas, colunas e blocos para validar condições.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int casos;
    scanf("%d", &casos);

    for (int c = 1; c <= casos; c++)
    {
        int sudoku[9][9];
        int valido = 1;

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                scanf("%d", &sudoku[i][j]);
            }
        }

        // Verifica linhas
        for (int i = 0; i < 9; i++)
        {
            int visto[10] = {0};

            for (int j = 0; j < 9; j++)
            {
                if (visto[sudoku[i][j]])
                    valido = 0;

                visto[sudoku[i][j]] = 1;
            }
        }

        // Verifica colunas
        for (int j = 0; j < 9; j++)
        {
            int visto[10] = {0};

            for (int i = 0; i < 9; i++)
            {
                if (visto[sudoku[i][j]])
                    valido = 0;

                visto[sudoku[i][j]] = 1;
            }
        }

        // Verifica blocos 3x3
        for (int linha = 0; linha < 9; linha += 3)
        {
            for (int coluna = 0; coluna < 9; coluna += 3)
            {
                int visto[10] = {0};

                for (int i = linha; i < linha + 3; i++)
                {
                    for (int j = coluna; j < coluna + 3; j++)
                    {
                        if (visto[sudoku[i][j]])
                            valido = 0;

                        visto[sudoku[i][j]] = 1;
                    }
                }
            }
        }

        printf("Instancia %d\n", c);

        if (valido)
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }

    return 0;
}

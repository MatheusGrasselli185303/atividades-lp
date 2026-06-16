/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB
Nome        : Matheus Grasselli dos Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 12/06/2026
Objetivo    : Trabalhar com números muito grandes e utilizar recursão para
              calcular a quantidade de grãos de trigo no tabuleiro.
Aprendizado : Aprendi a utilizar recursão e a trabalhar com valores muito
              grandes usando unsigned long long.
-------------------------------------------------------------------------- */

#include <stdio.h>

unsigned long long potencia2(int n)
{
    if (n == 0)
        return 1;

    return 2ULL * potencia2(n - 1);
}

int main()
{
    int T, casas;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &casas);

        unsigned long long graos = potencia2(casas) - 1;
        unsigned long long kg = graos / 12000;

        printf("%llu kg\n", kg);
    }

    return 0;
}

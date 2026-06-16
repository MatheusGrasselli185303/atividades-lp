/* --------------------------------------------------------------------------
Disciplina : Lógica de Programação, turma IB, 2026S1
Nome : Matheus Grasselli dos Santos
Linguagem : C
Problema : https://judge.beecrowd.com/pt/problems/view/1168
Data : 06/06/2026
Objetivo : Calcular a quantidade de LEDs necessários para representar um
número inteiro, usando switch para mapear cada dígito.
Aprendizado : Aprendi a usar a estrutura switch case para mapear valores fixos
e resolver problemas de contagem de padrões.
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
//Declaração de variáveis
int N, i, leds;
char numero[105];

//Processamento das entradas
scanf("%d", &N);

while(N--){
    scanf("%s", numero);

    leds = 0;

    //Processamento
    for(i = 0; numero[i] != '\0'; i++){
        switch(numero[i]){
            case '0': leds += 6; break;
            case '1': leds += 2; break;
            case '2': leds += 5; break;
            case '3': leds += 5; break;
            case '4': leds += 4; break;
            case '5': leds += 5; break;
            case '6': leds += 6; break;
            case '7': leds += 3; break;
            case '8': leds += 7; break;
            case '9': leds += 6; break;
        }
    }

    printf("%d leds\n", leds);
}

return 0;
}

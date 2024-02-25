/*
A importância de R$780.000,00 será dividida entre três ganhadores de um concurso sendo que:

i.   o  primeiro ganhador receberá 46% do total.
ii.  o segundo receberá 32% do total.
iii. o terceiro receberá o restante.

Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

#include <stdio.h>

int main(){
    const float din = 780000;
    float gan1, gan2, gan3;

    gan1 = din * 0.46;
    gan2 = din * 0.32;
    gan3 = din * (1 - 0.46 - 0.32);

    printf("O primeiro ganhador recebeu: %.2f\nO segundo ganhador recebeu: %.2f\nO terceiro ganhador recebeu: %.2f\n", gan1, gan2, gan3);
    return 0;
}

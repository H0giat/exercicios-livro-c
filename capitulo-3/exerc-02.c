/*
Faça um programa que leia um número real e imprima a quinta parte desse número
*/

#include <stdio.h>

int main(){
    float numero, div;
    printf("Digite um numero real: ");
    scanf("%f", &numero);
    div = numero / 5;
    printf("Resultado: %f\n", div);
    return 0;
}
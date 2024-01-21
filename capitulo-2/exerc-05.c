/*
Faça um programa que leia um valor do tipo float e depois o imprima usando o operador "%d".
Veja o aconteceu.
*/

#include <stdio.h>

int main(){
    float num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("\nNumero: %f\n", num);
    return 0;
}
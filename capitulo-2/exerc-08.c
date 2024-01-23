/*
Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa
em que eles foram lidos
*/

#include <stdio.h>

int main(){
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);
    printf("%d e %d\n", num2, num1);
    return 0;
}
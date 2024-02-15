/*
Faça um programa que leia três valores inteiros e mostre sua soma
*/

#include <stdio.h>

int main(){
    int num1, num2, num3, soma;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    
    soma = num1 + num2 + num3;
    printf("%d\n", soma);
    return 0;
}
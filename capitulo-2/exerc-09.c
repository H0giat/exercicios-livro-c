/*
Faça um programa que leia dois valores do tipo float. Use um único comando de leitura para isso.
Em seguida, imprima os valores lidos na ordem inversa em que foram lidos.
*/

#include <stdio.h>

int main(){
    float num1, num2;
    printf("Digite dois valores flutuantes separados por espaco: ");
    scanf("%f %f", &num1, &num2);
    printf("%f %f\n", num2, num1);
    return 0;
}
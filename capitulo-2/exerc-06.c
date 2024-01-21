/*
Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.
*/

#include <stdio.h>

int main(){
    double num;
    printf("Digite um numero: ");
    scanf("%lf", &num);
    printf("\n%e\n", num);
    return 0;
}
/*
Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
*/

#include <stdio.h>

int main(){
    float num1, num2, num3, num4, media;
    printf("Digite o primeiro numero flutuante: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero flutuante: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero flutuante: ");
    scanf("%f", &num3);
    printf("Digite o quarto numero flutuante: ");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4) / 4;
    printf("A media e: %f\n", media);
    return 0;
}
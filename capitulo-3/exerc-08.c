/*
Leia um valor que represente uma temperatura em graus Celsius e apresente-a covertida em 
graus Fahrenheit. A fórmula de conversão é: F = C * (9.0 / 5.0) + 32.0 , sendo F a temperatura em 
Fahrenheit e C a temperatura em Celsius.
*/

#include <stdio.h>

int main(){
    float fahr, cels;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &cels);

    fahr = cels * (9.0 / 5.0) + 32.0;
    printf("Temperatura em Fahrenheit: %f\n", fahr);
    return 0;
}
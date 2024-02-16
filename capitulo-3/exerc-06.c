/*
Leia uma velocidade em km/h (quilômetros por hora) e apresente covertida em m/s (metros por segundo).
A fórmula de conversão é M = K / 36 , sendo K a velocidade em km/h e M em m/s.
*/

#include <stdio.h>

int main(){
    float K, M;
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &K);

    M = K / 36;
    printf("A velocidade convertida em m/s: %f\n", M);
    return 0;
}
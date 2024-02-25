/*
Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G * pi / 180 ,
sendo G o ângulo em graus e R em radianos e pi = 3.141592
*/

#include <stdio.h>

int main(){
    const float pi = 3.141592;
    float R,G;

    printf("Digite o ângulo em graus: ");
    scanf("%f", &G);

    R = G * pi / 180;
    printf("O valor em radianos: %f\n", R);
    return 0;
}

/*
Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. A área do círculo é A = pi * raio² ,
sendo pi = 3.141592
*/

#include <stdio.h>

int main(){
    const float pi = 3.141592;
    float A, raio;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    A = pi * (raio * raio);
    printf("A área do círculo: %.2f\n", A);
    return 0;
}

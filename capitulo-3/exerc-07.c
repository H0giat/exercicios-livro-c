/*
Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor 
correspondente em dólares.
*/

#include <stdio.h>

int main(){
    float real, dolar, conv;
    printf("Digite a cotacao do dolar correspondente ao dia de hoje: ");
    scanf("%f", &dolar);
    printf("Digite o valor em reais: ");
    scanf("%f", &real);

    conv = real / dolar;
    printf("A conversao de real para dolar fica: U$ %f\n", conv);
    return 0;
}
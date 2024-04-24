/*
Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
	O número digitado ao quadrado
	A raiz quadrada do número digitado
*/

#include <stdio.h>
#include <math.h>

int main(){
	double numero;

	printf("Informe o numero: ");
	scanf("%lf", &numero);

	if(numero > 0){
		printf("Quadrado: %.0lf\n", pow(numero, 2));
		printf("Raiz: %.0lf\n", sqrt(numero));
	}
	return 0;
}

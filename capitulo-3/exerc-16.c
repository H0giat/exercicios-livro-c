/*
Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse número por dois(utilize os operadores de deslocamento de bits)
*/

#include <stdio.h>

int main(){
	int num, mult, divs;

	printf("Digite um numero: ");
	scanf("%d", &num);

	divs = num >> 1;
	mult = num << 1;

	printf("Multiplicado : %d\nDividido: %d\n", mult, divs);
	return 0;
}

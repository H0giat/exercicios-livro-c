/*
Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit
*/

#include <stdio.h>

int main(){
	unsigned int num, comp;

	printf("Digite um numero: ");
	scanf("%d", &num);

	comp = ~num;

	printf("Complemento: %d\n", comp);
	return 0;
}

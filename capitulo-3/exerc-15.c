/*
Faça um programa para ler um número inteiro de três digitos. Em seguida, calcule e mostre o número
formatado pelos dígitos invertidos do número lido. Exemplo: 123 -> 321
*/

#include <stdio.h>

int main(){
	unsigned int num, uni, dez, cen;

	printf("Digite um numero de tres digitos: ");
	scanf("%d", &num);

	uni = num % 10;
	dez = (num % 100) / 10;
	cen = num / 100;

	printf("%d%d%d\n", uni, dez, cen);
	return 0;
}

/*
Faça um programa para ler um número inteiro de três digitos. Em seguida, calcule e mostre o número
formatado pelos dígitos invertidos do número lido. Exemplo: 123 -> 321
*/

#include <stdio.h>

int main(){
	unsigned int num, uni, dez, cen;

	printf("Digite um numero de tres digitos: ");
	scanf("%d", &num);

	// em 'uni' ele retorna 3 como resto da divisão
	uni = num % 10;
	// em 'dez' ele retorna 23 e depois é dividido por 10 para retornar apenas o 2
	dez = (num % 100) / 10;
	// em 'cen' ele apenas divide por 100 e retorna 1
	cen = num / 100;

	printf("%d%d%d\n", uni, dez, cen);
	return 0;
}

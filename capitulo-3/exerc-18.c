/*
Elabore um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e à direita,
do primeiro pelo segundo número.
*/

#include <stdio.h>

int main(){
	int num1, num2, des_e, des_d;

	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);

	des_e = num1 << num2;
	des_d = num1 >> num2;

	printf("Deslocado à esquerda: %d\nDeslocado à direita: %d\n", des_e, des_d);
	return 0;
}

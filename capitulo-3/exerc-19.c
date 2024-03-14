/*
Elabore um programa que leia dois números inteiros e exiba o resultado das operações de "ou exclusivo", "ou bit a bit" e "e bit a bit" entre eles.
*/

#include <stdio.h>

int main(){
	int num1, num2, ou_excl, ou_bt, e_bt;

	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);

	ou_excl = num1 ^ num2;
	ou_bt = num1 | num2;
	e_bt = num1 & num2;

	printf("OU EXCLUSIVO: %d\nOU BIT A BIT: %d\nE BIT A BIT: %d\n", ou_excl, ou_bt, e_bt);
	return 0;
}

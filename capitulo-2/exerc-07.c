/*
Elabore um programa que leia um caractere e depois o imprima como um valor
inteiro.
*/

#include <stdio.h>

int main(){
	char letra;
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	printf("\nLetra: %d\n", letra);
	return 0;
}
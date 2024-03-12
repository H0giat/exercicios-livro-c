/*
 Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso.
*/

#include <stdio.h>

int main(){
	char letra;
	int conv;

	printf("Digite uma letra para conversão para sua forma maiúscula: ");
	scanf("%c", &letra);

	conv = (int) letra - 32;

	printf("%c\n", conv);
	return 0;
}

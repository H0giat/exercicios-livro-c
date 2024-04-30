/*
Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou por 5, mas não simultaneamente pelos dois.
*/

#include <stdio.h>

int main(){
	int numr;

	printf("Digite um numero para verificacao: ");
	scanf("%d", &numr);

	if(numr % 3 == 0){
		printf("Divisivel por 3\n");
	}else{
		if(numr % 5 == 0){
			printf("Divisivel por 5\n");
		}else{
			printf("Erro, tente novamente\n");
		}
	}
	return 0;
}

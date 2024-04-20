/*
Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:

Infantil A -> 5-7
Infantil B -> 8-10
Juvenil A -> 11-13
Juvenil B -> 14-17
Sênior -> maiores de 18 anos
*/

#include <stdio.h>

int main(){
	unsigned int idade;

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	if(idade >= 18){
		printf("Categoria: Senior\n");
	}else{
		if(idade >= 5 && idade <= 7){
			printf("Categotia: Infantil A\n");
		}

		if(idade >= 8 && idade <= 10){
			printf("Categoria: Infantil B\n");
		}

		if(idade >= 11 && idade <= 13){
			printf("Categoria: Juvenil A\n");
		}

		if(idade >= 14 && idade <= 17){
			printf("Categoria: Juvenil B\n");
		}
	}
	return 0;
}

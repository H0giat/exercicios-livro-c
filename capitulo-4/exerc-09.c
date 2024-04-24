/*
Faça um programa que leia a altura e o peso de uma pessoa. 
De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa.
*/

#include <stdio.h>

int main(){
	float altura, peso;

	printf("Digite sua altura: ");
	scanf("%f", &altura);
	printf("Digite seu peso: ");
	scanf("%f", &peso);

	if(altura < 1.20 && peso < 60){
		printf("Classificacao: A\n");
	}else{
		if(altura < 1.20 && peso >= 60 && peso <= 90){
			printf("Classificacao: D\n");
		}

		if(altura < 1.20 && peso > 90){
			printf("Classificacao: G\n");
		}
	}

	if(altura >= 1.20 && altura <= 1.70 && peso < 60){
		printf("Classificacao: B\n");
	}else{
		if(altura >= 1.20 && altura <= 1.70 && peso >= 60 && peso <= 90){
			printf("Classificacao: E\n");
		}

		if(altura >= 1.20 && altura <= 1.70 && peso > 90){
			printf("Classificacao: H\n");
		}
	}

	if(altura > 1.70 && peso < 60){
		printf("Classificacao: C\n");
	}else{
		if(altura > 1.70 && peso >= 60 && peso <= 90){
			printf("Classificacao: F\n");
		}

		if(altura > 1.70 && peso > 90){
			printf("Classificacao: I\n");
		}
	}
	return 0;
}

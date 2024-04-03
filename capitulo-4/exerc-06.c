/*
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (em que "h" corresponde à altura):
	homens: (72.7 * h) - 58
        mulheres: (62.1 * h) - 44.7
*/

#include <stdio.h>

int main(){
	double h, peso;
	char sexo;

	printf("Digite seu sexo: ");
	scanf("%c", &sexo);
	printf("Digite sua altura: ");
	scanf("%lf", &h);

	if(sexo == 'm' || sexo == 'M'){
		peso = (72.7 * h) - 58;
		printf("Peso ideal: %.2lf\n", peso);
	}else{
		if(sexo == 'f' || sexo == 'F'){
			peso = (62.1 * h) - 44.7;
			printf("Peso ideal: %.2lf\n", peso);
		}else{
			printf("Erro, tente novamente!\n");
		}
	}
	return 0;
}

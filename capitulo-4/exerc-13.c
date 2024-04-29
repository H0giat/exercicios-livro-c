/*
Faça um programa que mostre ao usuário um menu com quatro opções de operaões matemáticas (as operações básicas, por exemplo). O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o resultado.
*/

#include <stdio.h>

int main(){
	unsigned int opr;
	float num1, num2, resul;

	printf("Digite o numero para (1)soma (2)subtracao (3)multiplicacao (4)divisao: ");
	scanf("%d", &opr);
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);

	switch(opr){
		case 1:
			resul = num1 + num2;
			printf("A soma resultante e %.2f\n", resul);
			break;
		case 2:
			resul = num1 - num2;
			printf("A subtracao resultante e %.2f\n", resul);
			break;
		case 3:
			resul = num1 * num2;
			printf("A multiplicacao resultante e %.2f\n", resul);
			break;
		case 4:
			resul = num1 / num2;
			printf("A divisao resultante e %.2f\n", resul);
			break;
		default:
			printf("Erro, tente novamente!\n");
	}
	return 0;
}

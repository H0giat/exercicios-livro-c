/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.

Estados: MG, SP, RJ, MS
Imposto: 7%, 12%, 15%, 8%
*/

#include <stdio.h>

int main(){
	unsigned int estd;
	double prodt, nov_prc;

	printf("Digite o numero correspondente ao estado (1)MS (2)SP (3)RJ (4)MS : ");
	scanf("%d", &estd);

	printf("Digite o preco do produto: ");
	scanf("%lf", &prodt);

	switch(estd){
		case 1:
			nov_prc = prodt + (prodt * 0.07);
			printf("Novo preco: %.2lf\n", nov_prc);
			break;
		case 2:
			nov_prc = prodt + (prodt * 0.12);
			printf("Novo preco: %.2lf\n", nov_prc);
			break;
		case 3:
			nov_prc = prodt + (prodt * 0.15);
			printf("Novo preco: %.2lf\n", nov_prc);
			break;
		case 4:
			nov_prc = prodt + (prodt * 0.08);
			printf("Novo preco: %.2lf\n", nov_prc);
			break;
		default:
			printf("Erro, tente novamente!\n");
	}
	return 0;
}

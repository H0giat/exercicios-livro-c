/*
Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuário.
*/

#include <stdio.h>
#include <math.h>

int main(){
	unsigned int x, y, z, opr;
	float med_g, med_p, med_a, med_h;

	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	printf("Digite o terceiro numero: ");
	scanf("%d", &z);
	printf("Digite a media que necessitar (1)Geometrica, (2)Ponderada, (3)Harmonica e (4)Aritmetica: ");
	scanf("%d", &opr);

	switch(opr){
		case 1:
			double xd = (double) x;
			double yd = (double) y;
			double zd = (double) z;
			med_g = cbrt(x * y * z);
			printf("G = %.2lf\n", med_g);
			break;
		case 2:
			med_p = (x + 2 * y + 3 * z) / 6;
			printf("P = %.2f\n", med_p);
			break;
		case 3:
			float xf = (float) x;
			float yf = (float) y;
			float zf = (float) z;
			med_h = 3 / (1 / xf + 1 / yf + 1 / zf);
			printf("H = %.2f\n", med_h);
			break;
		case 4:
			med_a = (x + y + z) / 3;
			printf("A = %.2f\n", med_a);
			break;
		default:
			printf("Erro, tente novamente!\n");
	}
	return 0;
}

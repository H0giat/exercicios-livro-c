/*
Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = pi * raio² * altura,
em que pi = 3.141592
*/

#include <stdio.h>

int main(){
	const float pi = 3.141592;
	float raio, h, v;

	printf("Digite a altura do cilindro: ");
	scanf("%f", &h);
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raio);

	v = pi * (raio * raio) * h;
	printf("O volume do cilindro e: %.2f\n", v);
}

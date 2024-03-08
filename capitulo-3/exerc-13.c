/*
Sejam 'a' e 'b' os catetos de um triângulo cuja hipotenusa 'h' é obtida pela equação: 
h = raiz_quadrada(a² * b²)

Faça um programa que leia os valores de 'a' e 'b', e calcule o valor da hipotenusa através da 
fórmula dada. Imprima o resultado.
*/

#include <stdio.h>
#include <math.h>

int main(){
	double a, b, h, raiz_quad;

	printf("Digite o valor do cateto 'a': ");
	scanf("%lf", &a);
	printf("Digite o valor do cateto 'b': ");
	scanf("%lf", &b);

	h = (a * a) * (b * b);

	raiz_quad = sqrt(h);

	printf("Valor da hipotenusa: %.2lf\n", raiz_quad);
	
	return 0;
}

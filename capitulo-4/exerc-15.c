/*
Faça um programa que leia os coeficientes de uma equação do segundo grau.
Em seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são calculadas como:

x = -b +- raiz_quadrada(delta)
    --------------------------
              2 * a

em que delta = (b² - 4 * a * c) e ax²+ bx + c = 0 representa uma equação do segundo grau.
A variável 'a' tem que ser diferente de zero. 
Caso seja igual, imprima a mensagem "Não é equação do segundo grau".
Do contrário, imprima:

	Se delta < 0, não existe real. Imprima: Não existe raiz.
	Se delta = 0, existe uma raiz real. Imprima: Raiz única.
	Se delta > 0, existem duas raízes reais. Imprima as raízes.
*/

#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, delta, x1, x2;

	printf("Digite o valor de \"a\": ");
	scanf("%lf", &a);
	printf("Digite o valor de \"b\": " );
	scanf("%lf", &b);
	printf("Digite o valor de \"c\": " );
	scanf("%lf", &c);

	if(a == 0){
		printf("A funcao nao e quadratica!\n");
	}else{
		delta = pow(b, 2) - (4 * a * c);
		printf("delta = %.0lf\n", sqrt(delta));

		if(delta < 0){
			printf("Nao existe raiz.\n");
		}else{
			if(delta == 0){
				printf("Existe apenas uma unica raiz.\n");
			}else{
				x1 = (-b + sqrt(delta)) / (2 * a);
				x2 = (-b - sqrt(delta)) / (2 * a);

				printf("x1 = %.2lf e x2 = %.2lf\n", x1, x2);
			}
		}
	}

	return 0;
}

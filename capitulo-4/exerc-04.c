/*
Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação:
	For maior que 20% do salário, imprima: "empréstimo não concedido".
	Caso contrário, imprima: "empréstimo concedido".
*/

#include <stdio.h>

int main(){
	float salario, emprest, porct;

	printf("Informe seu salario: ");
	scanf("%f", &salario);
	printf("Informe o valor do emprestimo desejado: ");
	scanf("%f", &emprest);

	porct = salario / 0.2;

	if(emprest > porct){
		printf("Emprestimo nao concedido!\n");
	}else{
		printf("Emprestimo concedido!\n");
	}
	return 0;
}

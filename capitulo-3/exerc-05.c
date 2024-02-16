/*
Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
*/

#include <stdio.h>

int main(){
    unsigned int ano, idade, ano_nascimento;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &ano);

    ano_nascimento = ano - idade;
    printf("O ano de seu nascimento e: %d\n", ano_nascimento);
    return 0;
}
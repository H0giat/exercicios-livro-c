/*
Faça um programa que leia um número inteiro e retorne o seu antecessor e seu sucessor.
*/

#include <stdio.h>

int main(){
    int numero, ant, suc;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    ant = numero - 1;
    suc = numero + 1;
    printf("Seu antecessor: %d\nSeu sucessor: %d\n", ant, suc);
    return 0;
}
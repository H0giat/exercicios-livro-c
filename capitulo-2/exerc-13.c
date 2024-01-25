/*
Faça um programa que leia uma variavel do tipo char e depois o imprima entre aspas duplas.
Assim, se o caractere lido for a letra A, deverá ser impresso "A".
*/

#include <stdio.h>

int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("\"%c\"\n", letra);
    return 0;
}
/*
Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha.
Use apenas um comando printf().
*/

#include <stdio.h>

int main(){
    char lt1, lt2, lt3;
    printf("Digite tres letras separadas por espacos: ");
    scanf("%c %c %c", &lt1, &lt2, &lt3);
    printf("%c\n%c\n%c\n", lt1, lt2,lt3);
    return 0;
}
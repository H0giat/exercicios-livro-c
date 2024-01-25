/*
Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as de três maneiras
diferente: separadas por espaço, por uma tabulação horizontal e uma em cada linha.
Use um único comando printf() para cada operação de escrita das três variáveis.
*/

#include <stdio.h>

int main(){
    char letra;
    int numero;
    float numero_flut;

    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Digite um numero flutuante: ");
    scanf("%f", &numero_flut);

    printf("%c %d %f\n", letra, numero, numero_flut);
    printf("%c\t%d\t%f\t\n", letra, numero, numero_flut);
    printf("%c\n%d\n%f\n", letra, numero, numero_flut);
    return 0;
}
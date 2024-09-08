/*
Elabore um programa que peça ao usuário para digitar 10 valores.
Some esses valores e apresente o resultado na tela
*/

#include <stdio.h>

int main(){
  double cont, med, aux;

  for(int i = 0; i < 10; i++){
    printf("Digite seus valores: ");
    scanf("%lf", &cont);
    aux += cont;
  }

  med = aux / 10;
  printf("Media: %.1lf\n", med);
  return 0;
}

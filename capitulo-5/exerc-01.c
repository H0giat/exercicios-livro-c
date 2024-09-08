/*
Faça um programa que leia um número inteiro positivo N e 
imprima todos os números naturais de 0 até N em ordem crescente
*/

#include <stdio.h>

int main(){
  unsigned int num;

  printf("Digite o numero: ");
  scanf("%d", &num);

  for(int i = 0; i <= num; i++){
    printf("%d\n", i);
  }
  return 0;
}

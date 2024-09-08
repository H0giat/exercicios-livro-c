/*
Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
considerando números maiores que 0
*/

#include <stdio.h>

int main(){
  int mult;

  for(int i = 1; i <= 5; i++){
    mult = i * 3;
    printf("%d\n", mult);
  }
  return 0;
}

/*
Faça um programa que leia um número inteiro N e depois 
imprima os N primeiros números naturais ímpares
*/

#include <stdio.h>

int main(){
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  for(int i = 0; i < num; i++){
    //printf("%d\n", i);
    if(i % 2 == 0){
      continue;
    }else{
      printf("%d\n", i);
    }
  }
  return 0;
}

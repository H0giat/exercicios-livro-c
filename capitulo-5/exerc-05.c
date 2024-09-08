/*
Faça um programa que calcule e mostre a soma dos 50 primeiros números pares
*/

#include <stdio.h>

int main(){
  int num = 0;
  for(int i = 1; i <= 100; i++){
    if(i % 2 == 0){
      num += i;
    }else{
      continue;
    }
  }
  printf("%d\n", num);
  return 0;
}

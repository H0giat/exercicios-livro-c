/*
Faça um programa que mostre uma contagem regressiva na tela,
iniciando em 10 e terminando em 0. Mostre uma mensagem "FIM!" após a contagem
*/

#include <stdio.h>

int main(){
  for(int i = 10; i >= 0; i--){
    printf("%d\n", i);
  }

  goto fim;

fim:
  printf("FIM!\n");
  return 0;
}

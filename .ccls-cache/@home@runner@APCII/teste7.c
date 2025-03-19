// faça um progama que receba 2 números do usuário e diga quantos e quais primos há entre eles.
#include <stdio.h>

int ehprimo(int num){
  if(num<=1){
    return 0;
  }
for (int i = 2; i * i <= num; i++){
  if(num % i == 0){
    return 0;
    
  }
  return 1;

}
  int contarprimos(int x, int y){

    int count = 0;
    for(int i = x; i <= y; i++)
  }

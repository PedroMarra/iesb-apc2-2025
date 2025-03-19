#include <stdio.h>
#include <stdlib.h>
int main(){

int a = 10; // valor inicial de a
int b = 20; // valor inical de b 

  
//declarando os ponteiros e inicializando-os com endereços de a e b
  int *p1 = &a; //ponteiro p1 aponta para a
  int *p2 = &b;// ponteiro p2 aponta para b

printf("valores iniciais: a = %d, b = %d\n", a, b);

  
  //troca dos valores utilizando ponteiros

  int temp = *p1; // armazenando o valor de a (10) em temp 
  *p1 = *p2; // atribuindo o valor de b(20) a a(10) agora a = (20)
  *p2 = temp; // atribuindo o valor original de a(10) a b agora b = (10)

printf("valores apos a troca: a = %d, b = %d\n", a, b); //exibindo valores após a troca


  return 0;
}
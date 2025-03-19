//Atribuição e Acesso Simples.
//Descrição: Crie uma variável inteira, use um ponteiro para acessar e modificar o valor da variável.

#include <stdio.h>
int main(){

  int a = 10;
  int *p = &a; // ponteiro p1 aponta para o endereço de a 

  printf("valor inicial de a: %d\n", a);
  printf("endereço de a: %p\n",(void*)&a);

  *p = 20; // modificando o valor de a através do ponteiro

  printf("o novo valor de a: %d\n ",a); // valor novo de a

  return 0;
}
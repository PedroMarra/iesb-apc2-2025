//faça um progama que receba do usuário um número e mostre na tela se é perfeito//

#include <stdio.h>
int perfeito(int num){
  int soma = 0;

  for (int i=1; i < num; i++){
    if(num % i == 0){
      soma += i;
    }
  }
  if (soma == num){
    return 1;
  }else{
    return 0;
  }
}
int main(){
  int numero;
  printf("Digite um número positivo: ");
  scanf("%d", &numero);

  if(numero<=0){
  printf("Número inválido, digite um número maior que 0. \n");
  return 1;
}
if (perfeito(numero)){
  printf("%d é um número perfeito. \n", numero);
}else{
  printf("%d não é um número perfeito. \n", numero);
}
return 0;
}

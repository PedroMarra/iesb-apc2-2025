//faça um progama em c que le dois valores e imprime: se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo, se o primeiro valor for menor que o segundo a lista de valores do primeiro até o segundo em ordem decrescente, se ambos forem iguais a mensagem "valores iguais".

#include <stdio.h>
int main(){
int valor1, valor2;

  printf("digite o valor n 1:\n ");
  scanf("%d", &valor1);
  printf("digite o valor n 2:\n ");
  scanf("%d", &valor2);

  if(valor1 < valor2){
    printf("a lista do primeiro até o segundo em ordem crescente é:\n");
  
  for(int i = valor1; i <= valor2; i++){
    printf("%d",i);
    printf("\n");
  } 

}  if (valor1 > valor2) {
  printf("a lista do primeiro até o segundo em ordem decrescente é:\n");
  for (int i = valor1; i >= valor2; i--){
    printf("%d", i);
    printf("\n");
  }
} else {
  printf("valores iguais\n");
}

return 0;
}

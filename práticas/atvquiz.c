//faça um programa que receba 2 números do usuário X e Y. Esses valores correspondem ao menor número perfeito maior que zero. Ex: Se X = 2 estamos falando do segundo menor número perfeito maior que zero. Se Y = 4 significa o quarto menor número perfeito maior que zero. Mostre o somatório dos números primos entre X e Y

#include <stdio.h>

int eh_primo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return 0;
    } 
    return 1;
}

int prox_pft(int start) {
    int num = start + 1;
    while (1) {
        int soma_divisores = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) soma_divisores += i; 
        }
        if (soma_divisores == num) return num;
        num++; 
    }
}

int main() {
  int x, y;
  printf("Digite o valor de X: ");
  scanf("%d", &x);
  printf("Digite o valor de Y: ");
  scanf("%d", &y);


  int x_pft = 0;
      for (int i = 0; i < x; i++) {
          x_pft = prox_pft(x_pft);
      }
      int y_pft = 0;
      for (int i = 0; i < y; i++) {
          y_pft = prox_pft(y_pft);
      }


      int primo_soma = 0;
      for (int num = x_pft + 1; num < y_pft; num++) {
          if (eh_primo(num)) primo_soma += num;
      }

      printf("O somatório dos números primos entre o %dº e o %dº menor número perfeito é: %d\n", x, y, primo_soma);

      return 0;
  }








  

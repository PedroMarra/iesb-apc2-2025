#include <stdio.h>

int primo(int x);

int main() {
  int num;
  printf("Digite um numero:\n");
  scanf("%d", &num);

  int p1 = 0, p2 = 0;
  for (int i = 2; i < num; i++) {
    if (primo(i)) {
      int complemento = num - i;
      if (primo(complemento)) {
        p1 = i;
        p2 = complemento;
        break;
      }
    }
  }

  if (p1 && p2) {
    printf("Os numeros primos para a soma de %d sao: %d e %d\n", num, p1, p2);
  } else {
    printf("Nao existem dois numeros primos cuja soma seja %d\n", num);
  }

  return 0;
}

int primo(int x) {
  if (x < 2)
    return 0;
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0)
      return 0;
  }
  return 1;
}
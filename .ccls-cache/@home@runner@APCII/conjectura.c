#include<stdio.h>

int primo(int x);

int main(){
    int num;
    int j = 0;
    int p = 0;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    for (int i = num; i > 1; i--) {
        if (primo(i)) {
          for (int f = i-1; f > 1; f--) {
              if (primo(f)) {
                  if (f + i == num) {
                      p = f;
                      j = i;
                      break;
                  }
              }
          }
        }
    }

  printf("Os numeros primos para a soma de %d sao: %d e %d\n", num, j, p);
    return 0;
}

int primo(int x) {
    int i;
    int k = 0;
    for (i = 1; i <= x; i++) {
        if (x % i == 0) {
            k++;
        }
    }
    if (k == 2) {
        return 1;
    } else {
        return 0;
    }
}
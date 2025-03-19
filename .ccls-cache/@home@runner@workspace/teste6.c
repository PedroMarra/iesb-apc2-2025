//Construa um programa em C ANSI onde exista uma função que receba 2 números inteiros “x” e “y” e retorne quantos números primos existem dentro do intervalo fechado entre “x” e “y”. Na sua função principal, solicite ao usuário os valores X e Y e diga quantos primos há entre eles//

#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num){
    if (num <= 1) {
        return 0; // Se o número for menor ou igual a 1, não é primo
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Se o número for divisível por algum outro número, não é primo
    
    }
    return 1; // Se não foi encontrado nenhum divisor, o número é primo
      
}

// Função para contar números primos entre x e y
int contarPrimos(int x, int y) {
    int count = 0;
    for (int i = x; i <= y; i++) {
        if (ehPrimo(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int x, y;
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    if (x > y) {
        printf("X deve ser menor ou igual a Y.\n");
        return 1;
    }

    int primos = contarPrimos(x, y);
    printf("Existem %d numeros primos entre %d e %d.\n", primos, x, y);

    return 0;
}
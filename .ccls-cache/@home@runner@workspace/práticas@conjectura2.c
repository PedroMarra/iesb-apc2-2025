// faça um progama que dado um número par P superior a 4 e diga quais 2 numeros primos somados são iguais a p 

#include <stdio.h>
#include <stdlib.h>


int eh_Primo(int n) {
    int i, k = 0;


    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            k++;
        }
    }


    if (k == 2) {
        return 1; 
    } else {
        return 0; 
    }
}


int encontrar_Pares_Primos(int num) {
    if (num % 2 != 0 || num <= 4) {
        printf("P deve ser um número par maior que 4.\n");
        return 0;
    }

    for (int i = 1; i < num; i++) {
        if (eh_Primo(i) && eh_Primo(num - i)) {
            printf("Os números primos são: %d e %d\n", i, num - i);
            return 1;
        }
    }


    printf("Nenhum par de primos encontrado.\n");
    return 0;
}

int main() {
    int num;
    printf("Digite um número par maior que 4: ");
    scanf("%d", &num);
    encontrar_Pares_Primos(num);
    return 0;
}


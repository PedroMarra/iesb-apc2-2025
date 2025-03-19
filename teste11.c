#include <stdio.h>

int main() {
    int N, X;

    // Lê o número de casos de teste
    scanf("%d", &N);

    // Loop para cada caso de teste
    while (N--) {
        // Lê o valor do caso de teste atual
        scanf("%d", &X);

        // Verifica se o valor é zero
        if (X == 0) {
            printf("NULL\n");
        } else {
            // Verifica se o valor é par ou ímpar
            if (X % 2 == 0) {
                printf("EVEN ");
            } else {
                printf("ODD ");
            }

            // Verifica se o valor é positivo ou negativo
            if (X > 0) {
                printf("POSITIVE\n");
            } else {
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}

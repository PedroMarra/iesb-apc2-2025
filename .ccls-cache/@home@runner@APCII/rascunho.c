#include <stdio.h>

int main() {
    int valor1, valor2;

    // Solicita os dois valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    if (valor1 < valor2) {
        // Primeiro valor é menor que o segundo
        printf("Lista de valores do primeiro até o segundo:\n");
        for (int i = valor1; i <= valor2; i++) {
            printf("%d ", i);
        }
        printf("\n");
    } else if (valor1 > valor2) {
        // Primeiro valor é maior que o segundo
        printf("Lista de valores do primeiro até o segundo em ordem decrescente:\n");
        for (int i = valor1; i >= valor2; i--) {
            printf("%d ", i);
        }
        printf("\n");
    } else {
        // Valores são iguais
        printf("Valores iguais\n");
    }

    return 0;
}
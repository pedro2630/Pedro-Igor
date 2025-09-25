#include <stdio.h>

int main() {
    // Declaração das variáveis
    int X, Y, soma;

    // Entrada dos dois números inteiros
    printf("Digite o primeiro numero (X): ");
    scanf("%d", &X);

    printf("Digite o segundo numero (Y): ");
    scanf("%d", &Y);

    // Cálculo da soma
    soma = X + Y;

    // Saída do resultado
    printf("SOMA = %d\n", soma);

    return 0; // Finaliza o programa
}

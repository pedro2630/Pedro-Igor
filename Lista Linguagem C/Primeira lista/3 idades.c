#include <stdio.h>

int main() {
    // Declaração de variáveis
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    // Entrada dos dados da primeira pessoa
    printf("Nome da primeira pessoa: ");
    scanf(" %[^\n]s", nome1);  // Lê nomes com espaços

    printf("Idade da primeira pessoa: ");
    scanf("%d", &idade1);

    // Entrada dos dados da segunda pessoa
    printf("Nome da segunda pessoa: ");
    scanf(" %[^\n]s", nome2);

    printf("Idade da segunda pessoa: ");
    scanf("%d", &idade2);

    // Cálculo da idade média
    media = (idade1 + idade2) / 2.0;

    // Saída
    printf("%s e %s tem idade media de %.1lf anos\n", nome1, nome2, media);

    return 0; // Finaliza o programa
}

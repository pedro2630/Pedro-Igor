#include <stdio.h>

int main() {
    double glicose;

    printf("Digite a medida de glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100) {
        printf("Classificacao: Normal\n");
    } else if (glicose <= 140) {
        printf("Classificacao: Elevado\n");
    } else {
        printf("Classificacao: Diabetes\n");
    }

    return 0;
}

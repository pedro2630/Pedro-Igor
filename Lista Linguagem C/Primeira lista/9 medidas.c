#include <stdio.h>

int main() {
    // Declaração de variáveis
    double A, B, C;
    double area_quadrado, area_triangulo, area_trapezio;

    // Entrada das medidas
    printf("Digite a medida A: ");
    scanf("%lf", &A);

    printf("Digite a medida B: ");
    scanf("%lf", &B);

    printf("Digite a medida C: ");
    scanf("%lf", &C);

    // Cálculos das áreas
    area_quadrado = A * A;
    area_triangulo = (A * B) / 2.0;
    area_trapezio = ((A + B) * C) / 2.0;

    // Saída dos resultados com 4 casas decimais
    printf("Area do quadrado = %.4lf\n", area_quadrado);
    printf("Area do triangulo retangulo = %.4lf\n", area_triangulo);
    printf("Area do trapezio = %.4lf\n", area_trapezio);

    return 0; // Finaliza o programa
}

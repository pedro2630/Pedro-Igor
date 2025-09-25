#include <stdio.h>
#include <math.h> // Biblioteca para usar a função sqrt()

int main() {
    // Declaração das variáveis
    double base, altura, area, perimetro, diagonal;

    // Entrada dos dados
    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    // Cálculos
    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2)); // Teorema de Pitágoras

    // Saída com 4 casas decimais
    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);

    return 0; // Finaliza o programa
}

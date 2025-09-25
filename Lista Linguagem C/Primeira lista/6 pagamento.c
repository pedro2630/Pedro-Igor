#include <stdio.h>
#include <math.h> // Biblioteca para funções matemáticas (opcional, se quiser usar M_PI)

int main() {
    // Declaração de variáveis
    double r, area;
    const double PI = 3.14159; // Valor de pi

    // Entrada do raio
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    // Cálculo da área do círculo
    area = PI * r * r;

    // Saída do resultado com 3 casas decimais
    printf("AREA = %.3lf\n", area);

    return 0; // Finaliza o programa
}

#include <stdio.h>

int main() {
    // Declaração de variáveis
    double distancia, combustivel, consumo;

    // Entrada da distância percorrida em km
    printf("Digite a distancia percorrida (km): ");
    scanf("%lf", &distancia);

    // Entrada do total de combustível gasto em litros
    printf("Digite o total de combustivel gasto (litros): ");
    scanf("%lf", &combustivel);

    // Cálculo do consumo médio (km por litro)
    consumo = distancia / combustivel;

    // Saída do resultado com 3 casas decimais
    printf("Consumo medio = %.3lf km/l\n", consumo);

    return 0; // Finaliza o programa
}

#include <stdio.h> // Biblioteca padrão para entrada e saída de dados

int main() {
    // Declaração das variáveis
    float largura, comprimento, valor_m2, area, preco;

    // Entrada: largura do terreno
    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);

    // Entrada: comprimento do terreno
    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);

    // Entrada: valor do metro quadrado
    printf("Digite o valor do metro quadrado (R$): ");
    scanf("%f", &valor_m2);

    // Processamento: cálculo da área e do preço
    area = largura * comprimento;
    preco = area * valor_m2;

    // Saída: exibe a área do terreno
    printf("Área do terreno = %.2f m2\n", area);

    // Saída: exibe o preço do terreno
    printf("Preço do terreno = R$ %.2f\n", preco);

    return 0; // Finaliza o programa
}

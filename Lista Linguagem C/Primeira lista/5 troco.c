#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {
    // Declaração de variáveis
    double preco, dinheiro, troco; // Valores monetários
    int qtd;                       // Quantidade de itens comprados

    // Entrada do preço unitário do produto
    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    // Entrada da quantidade comprada
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    // Entrada do dinheiro recebido do cliente
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    // Cálculo do troco: dinheiro recebido menos o total da compra
    troco = dinheiro - (preco * qtd);

    // Exibição do troco, formatado com duas casas decimais
    printf("TROCO = %.2lf\n", troco);

    return 0; // Finaliza o programa com sucesso
}

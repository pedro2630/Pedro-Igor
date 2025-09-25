#include <stdio.h>

int main() {
    double preco, dinheiro, total, troco;
    int qtd;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    total = preco * qtd;

    if (dinheiro >= total) {
        troco = dinheiro - total;
        printf("TROCO = %.2lf\n", troco);
    } else {
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", total - dinheiro);
    }

    return 0;
}

#include <stdio.h>

int main() {
    // Declaração de variáveis
    char nome[50];
    double valor_hora, horas_trabalhadas, pagamento;

    // Entrada do nome do funcionário
    printf("Nome do funcionario: ");
    scanf(" %[^\n]s", nome); // Lê nomes com espaços

    // Entrada do valor recebido por hora
    printf("Valor recebido por hora: ");
    scanf("%lf", &valor_hora);

    // Entrada da quantidade de horas trabalhadas
    printf("Quantidade de horas trabalhadas: ");
    scanf("%lf", &horas_trabalhadas);

    // Cálculo do pagamento
    pagamento = valor_hora * horas_trabalhadas;

    // Saída do resultado
    printf("O pagamento de %s deve ser: R$ %.2lf\n", nome, pagamento);

    return 0; // Finaliza o programa
}

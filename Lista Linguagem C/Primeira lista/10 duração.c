#include <stdio.h>

int main() {
    // Declaração de variáveis
    int total_segundos;
    int horas, minutos, segundos;

    // Entrada da duração em segundos
    printf("Digite a duracao em segundos: ");
    scanf("%d", &total_segundos);

    // Cálculos
    horas = total_segundos / 3600;              // 1 hora = 3600 segundos
    minutos = (total_segundos % 3600) / 60;    // resto dividido por 60 para obter minutos
    segundos = total_segundos % 60;            // resto final são os segundos

    // Saída no formato horas:minutos:segundos
    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0; // Finaliza o programa
}

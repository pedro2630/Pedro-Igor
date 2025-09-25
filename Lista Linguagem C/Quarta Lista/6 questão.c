#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int somaPrincipal = 0, somaSecundaria = 0;

    for(int i=0;i<3;i++) {
        somaPrincipal += matriz[i][i];
        somaSecundaria += matriz[i][2-i];
    }

    printf("Diagonal principal = %d\n", somaPrincipal);
    printf("Diagonal secundaria = %d\n", somaSecundaria);
    return 0;
}

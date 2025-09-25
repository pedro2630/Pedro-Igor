#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {1, 22, 3, 4},
        {5, 6, 7, 88},
        {9, 10, 11, 12},
        {13, 14, 99, 16}
    };
    int maior = matriz[0][0];

    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            if(matriz[i][j] > maior)
                maior = matriz[i][j];

    printf("Maior elemento = %d\n", maior);
    return 0;
}

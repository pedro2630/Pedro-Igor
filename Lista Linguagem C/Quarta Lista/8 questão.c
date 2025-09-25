#include <stdio.h>

int contarOcorrencias(int matriz[4][4], int num) {
    int cont = 0;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(matriz[i][j] == num)
                cont++;
    return cont;
}

int main() {
    int matriz[4][4] = {
        {1,2,3,4},
        {5,6,7,1},
        {8,1,9,10},
        {1,11,12,13}
    };
    int num = 1;
    printf("O numero %d aparece %d vezes.\n", num, contarOcorrencias(matriz, num));
    return 0;
}

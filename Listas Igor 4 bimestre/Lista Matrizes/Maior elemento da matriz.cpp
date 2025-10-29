#include <iostream>
using namespace std;

int main() {
    int matriz[4][4], maior;
    cout << "Digite os valores da matriz 4x4:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matriz[i][j];

    maior = matriz[0][0];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matriz[i][j] > maior)
                maior = matriz[i][j];

    cout << "Maior valor = " << maior << endl;
    return 0;
}

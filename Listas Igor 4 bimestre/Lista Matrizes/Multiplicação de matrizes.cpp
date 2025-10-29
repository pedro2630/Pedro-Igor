#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], r[2][2] = {0};
    cout << "Digite a matriz A (2x2):\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];

    cout << "Digite a matriz B (2x2):\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> b[i][j];

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                r[i][j] += a[i][k] * b[k][j];

    cout << "Resultado da multiplicação:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << r[i][j] << " ";
        cout << endl;
    }
    return 0;
}

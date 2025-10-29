#include <iostream>
using namespace std;

int contar(int m[4][4], int num) {
    int cont = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (m[i][j] == num)
                cont++;
    return cont;
}

int main() {
    int m[4][4], num;
    cout << "Digite os valores da matriz 4x4:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> m[i][j];

    cout << "Digite o número a procurar: ";
    cin >> num;

    cout << "O número aparece " << contar(m, num) << " vezes.\n";
    return 0;
}

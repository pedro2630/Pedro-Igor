#include <iostream>
using namespace std;

void somaMatrizes(int a[3][3], int b[3][3], int r[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            r[i][j] = a[i][j] + b[i][j];
}

int main() {
    int a[3][3], b[3][3], r[3][3];
    cout << "Digite a primeira matriz 3x3:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Digite a segunda matriz 3x3:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];

    somaMatrizes(a, b, r);

    cout << "Matriz soma:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << r[i][j] << " ";
        cout << endl;
    }
    return 0;
}

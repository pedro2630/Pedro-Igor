#include <iostream>
using namespace std;

int main() {
    double v[8], soma = 0;
    for (int i = 0; i < 8; i++) {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> v[i];
        soma += v[i];
    }
    cout << "Média: " << soma / 8 << endl;
    return 0;
}

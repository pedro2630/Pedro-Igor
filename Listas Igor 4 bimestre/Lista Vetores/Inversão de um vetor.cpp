#include <iostream>
using namespace std;

int main() {
    int v[10], inv[10];
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> v[i];
    }
    for (int i = 0; i < 10; i++) {
        inv[i] = v[9 - i];
    }
    cout << "Vetor invertido: ";
    for (int i = 0; i < 10; i++) cout << inv[i] << " ";
    cout << endl;
    return 0;
}

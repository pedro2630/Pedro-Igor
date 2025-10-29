#include <iostream>
using namespace std;

int main() {
    int v[10], soma = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> v[i];
        soma += v[i];
    }
    cout << "Soma dos elementos: " << soma << endl;
    return 0;
}

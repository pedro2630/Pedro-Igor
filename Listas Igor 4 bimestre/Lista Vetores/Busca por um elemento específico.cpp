#include <iostream>
using namespace std;

int main() {
    int v[10], num;
    bool encontrado = false;
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> v[i];
    }
    cout << "Digite o número a procurar: ";
    cin >> num;
    for (int i = 0; i < 10; i++) {
        if (v[i] == num) {
            encontrado = true;
            break;
        }
    }
    if (encontrado) cout << "Número encontrado!" << endl;
    else cout << "Número não encontrado!" << endl;
    return 0;
}

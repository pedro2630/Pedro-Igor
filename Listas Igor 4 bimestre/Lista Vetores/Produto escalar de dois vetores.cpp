#include <iostream>
using namespace std;

int main() {
    int v1[5], v2[5], produto = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Vetor 1 - elemento " << i + 1 << ": ";
        cin >> v1[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << "Vetor 2 - elemento " << i + 1 << ": ";
        cin >> v2[i];
    }
    for (int i = 0; i < 5; i++) {
        produto += v1[i] * v2[i];
    }
    cout << "Produto escalar = " << produto << endl;
    return 0;
}

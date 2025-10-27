#include <iostream>
using namespace std;

int main() {
    int a, b, c, menor;

    cout << "Digite tres numeros inteiros: ";
    cin >> a >> b >> c;

    menor = a; // assume que o primeiro é o menor

    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    cout << "Menor = " << menor << endl;

    return 0;
}

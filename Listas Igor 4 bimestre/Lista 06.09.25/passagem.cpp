#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int codigo;
    char idaVolta;
    double preco = 0;

    cout << "Codigo do destino (1-Morros, 2-Barreirinhas, 3-Bacabeira, 4-Rosario): ";
    cin >> codigo;
    cout << "Compra de ida e volta? (S/N): ";
    cin >> idaVolta;

    switch (codigo) {
        case 1: preco = 120; break;
        case 2: preco = 200; break;
        case 3: preco = 50; break;
        case 4: preco = 80; break;
        default: cout << "Codigo invalido!" << endl; return 0;
    }

    if (idaVolta == 'S' || idaVolta == 's')
        preco *= 2 * 0.9;  // ida e volta com 10% desconto
    else
        preco *= 1;

    cout << fixed << setprecision(2);
    cout << "Valor total: R$ " << preco << endl;

    return 0;
}

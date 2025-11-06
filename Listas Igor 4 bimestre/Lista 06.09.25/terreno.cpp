#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double largura, comprimento, valorMetro;
    cout << "Largura do terreno: ";
    cin >> largura;
    cout << "Comprimento do terreno: ";
    cin >> comprimento;
    cout << "Valor do metro quadrado: ";
    cin >> valorMetro;

    double area = largura * comprimento;
    double preco = area * valorMetro;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << " m2" << endl;
    cout << "Preco do terreno = R$ " << preco << endl;

    return 0;
}

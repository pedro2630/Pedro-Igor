#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cod, qtd;
    double preco;

    cout << "Codigo do produto: ";
    cin >> cod;
    cout << "Quantidade comprada: ";
    cin >> qtd;

    if (cod == 1) preco = 5.00;
    else if (cod == 2) preco = 3.50;
    else if (cod == 3) preco = 4.80;
    else if (cod == 4) preco = 8.90;
    else preco = 7.32;

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << preco * qtd << endl;

    return 0;
}

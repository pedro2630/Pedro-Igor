#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro;
    int qtd;

    cout << "Preco unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> qtd;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    double total = preco * qtd;

    cout << fixed << setprecision(2);
    if (dinheiro >= total) {
        cout << "TROCO = R$ " << dinheiro - total << endl;
    } else {
        cout << "DINHEIRO INSUFICIENTE. FALTAM R$ " << total - dinheiro << endl;
    }

    return 0;
}

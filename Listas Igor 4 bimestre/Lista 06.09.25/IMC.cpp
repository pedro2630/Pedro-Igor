#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double peso, altura;
    cout << "Digite o peso (kg): ";
    cin >> peso;
    cout << "Digite a altura (m): ";
    cin >> altura;

    double imc = peso / (altura * altura);

    cout << fixed << setprecision(2);
    cout << "IMC = " << imc << endl;

    return 0;
}

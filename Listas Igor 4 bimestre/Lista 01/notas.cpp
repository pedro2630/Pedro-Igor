#include <iostream>
#include <iomanip> // para controlar casas decimais
using namespace std;

int main() {
    double nota1, nota2, media;

    cout << "Digite as duas notas: ";
    cin >> nota1 >> nota2;

    media = (nota1 + nota2) / 2.0;

    cout << fixed << setprecision(1);
    cout << "Nota final = " << media << endl;

    if (media < 60.0) {
        cout << "REPROVADO" << endl;
    }

    return 0;
}

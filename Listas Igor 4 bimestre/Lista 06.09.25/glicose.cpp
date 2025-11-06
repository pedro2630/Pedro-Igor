#include <iostream>
using namespace std;

int main() {
    double glicose;
    cout << "Digite a quantidade de glicose (mg/dl): ";
    cin >> glicose;

    if (glicose <= 100)
        cout << "Classificacao: Normal" << endl;
    else if (glicose <= 140)
        cout << "Classificacao: Elevado" << endl;
    else
        cout << "Classificacao: Diabetes" << endl;

    return 0;
}

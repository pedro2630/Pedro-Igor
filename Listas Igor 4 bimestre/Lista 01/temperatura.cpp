#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double temp;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;
    cout << "Digite a temperatura: ";
    cin >> temp;

    cout << fixed << setprecision(2);

    if (escala == 'F' || escala == 'f') {
        double c = 5 * (temp - 32) / 9;
        cout << "Temperatura equivalente em Celsius: " << c << " C" << endl;
    } else {
        double f = 9 * temp / 5 + 32;
        cout << "Temperatura equivalente em Fahrenheit: " << f << " F" << endl;
    }

    return 0;
}

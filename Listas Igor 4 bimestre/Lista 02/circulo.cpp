#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double raio, area;
    const double PI = 3.14159;

    cout << "Digite o valor do raio: ";
    cin >> raio;

    area = PI * pow(raio, 2);

    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;

    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;

    cout << "Digite a medida A: ";
    cin >> A;
    cout << "Digite a medida B: ";
    cin >> B;
    cout << "Digite a medida C: ";
    cin >> C;

    double areaQuadrado = A * A;
    double areaTriangulo = (A * B) / 2.0;
    double areaTrapezio = (A + B) * C / 2.0;

    cout << fixed << setprecision(4);
    cout << "Area do quadrado = " << areaQuadrado << endl;
    cout << "Area do triangulo = " << areaTriangulo << endl;
    cout << "Area do trapezio = " << areaTrapezio << endl;

    return 0;
}

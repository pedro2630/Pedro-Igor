#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n[7];
    cout << "Digite as 7 notas do aluno: " << endl;
    for(int i = 0; i < 7; i++) {
        cout << "Nota " << i+1 << ": ";
        cin >> n[i];
    }

    double media1 = (n[0] + n[1] + n[2]) / 3;
    double media2 = (n[3] + n[4] + n[5]) / 3;
    double mediaFinal = (media1 + media2 + n[6]) / 3;

    cout << fixed << setprecision(1);
    cout << "Media final = " << mediaFinal << endl;

    if (mediaFinal < 60)
        cout << "Conceito C" << endl;
    else if (mediaFinal < 80)
        cout << "Conceito B" << endl;
    else
        cout << "Conceito A" << endl;

    return 0;
}

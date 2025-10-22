#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;

    cout << "Digite as tres medidas A, B e C: ";
    cin >> A >> B >> C;

    cout << fixed << setprecision(4);
    cout << "AREA DO QUADRADO = " << A * A << endl;
    cout << "AREA DO TRIANGULO = " << (A * B) / 2.0 << endl;
    cout << "AREA DO TRAPEZIO = " << ((A + B) * C) / 2.0 << endl;

    return 0;
}

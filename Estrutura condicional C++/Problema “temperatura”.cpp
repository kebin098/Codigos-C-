#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double temp, convertida;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    cout << "Digite a temperatura: ";
    cin >> temp;

    cout << fixed << setprecision(2);

    if (escala == 'F' || escala == 'f') {
        convertida = (temp - 32) * 5.0 / 9.0;
        cout << "Temperatura equivalente em Celsius: " << convertida << endl;
    } else {
        convertida = temp * 9.0 / 5.0 + 32;
        cout << "Temperatura equivalente em Fahrenheit: " << convertida << endl;
    }

    return 0;
}

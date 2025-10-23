#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float n1, n2, media;
    cout << "Digite as duas notas: ";
    cin >> n1 >> n2;
    media = (n1 + n2) / 2;

    cout << fixed << setprecision(1);
    cout << "Nota final: " << media << endl;

    if (media < 6.0)
        cout << "REPROVADO" << endl;
    else
        cout << "APROVADO" << endl;

    return 0;
}

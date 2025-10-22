#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double largura, comprimento, precoMetro, area, precoTotal;

    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o preco do metro quadrado: ";
    cin >> precoMetro;

    area = largura * comprimento;
    precoTotal = area * precoMetro;

    cout << fixed << setprecision(2);
    cout << "Area do terreno = " << area << endl;
    cout << "Preco do terreno = " << precoTotal << endl;

    return 0;
}

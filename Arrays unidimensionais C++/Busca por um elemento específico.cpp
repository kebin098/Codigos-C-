#include <iostream>
using namespace std;

int main() {
    int v[10], x;
    bool encontrado = false;

    cout << "Digite 10 numeros inteiros:\n";
    for (int i = 0; i < 10; i++)
        cin >> v[i];

    cout << "Digite o numero a buscar: ";
    cin >> x;

    for (int i = 0; i < 10; i++)
        if (v[i] == x)
            encontrado = true;

    if (encontrado)
        cout << "Numero encontrado!" << endl;
    else
        cout << "Numero nao encontrado." << endl;

    return 0;
}

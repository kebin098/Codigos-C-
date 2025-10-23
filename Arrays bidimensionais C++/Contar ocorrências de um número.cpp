#include <iostream>
using namespace std;

int contar(int m[4][4], int x) {
    int cont = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (m[i][j] == x)
                cont++;
    return cont;
}

int main() {
    int matriz[4][4], num;
    cout << "Digite os elementos da matriz 4x4:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matriz[i][j];

    cout << "Digite o numero a procurar: ";
    cin >> num;

    cout << "O numero aparece " << contar(matriz, num) << " vezes.\n";
    return 0;
}

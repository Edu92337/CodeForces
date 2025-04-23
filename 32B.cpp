#include <bits/stdc++.h>
using namespace std;

int main() {
    string codificada;
    cin >> codificada;
    string borze;

    for (int i = 0; i < codificada.length(); ) {
        if (codificada[i] == '.') {
            borze += '0';
            i++;
        } else if (codificada[i] == '-' && codificada[i+1] == '.') {
            borze += '1';
            i += 2;
        } else if (codificada[i] == '-' && codificada[i+1] == '-') {
            borze += '2';
            i += 2;
        }
    }

    cout << borze << endl;
    return 0;
}

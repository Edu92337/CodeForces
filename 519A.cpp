#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char,int> brancas = {
        {'Q', 9}, {'R', 5}, {'B', 3}, {'P', 1}, {'N', 3}
    };
    map<char,int> pretas = {
        {'q', 9}, {'r', 5}, {'b', 3}, {'p', 1}, {'n', 3}
    };

    int pontos_b = 0, pontos_p = 0;
    string linha;

    for (int i = 0; i < 8; i++) {
        cin >> linha;
        for (int j = 0; j < 8; j++) {
            char c = linha[j];
            if (brancas.count(c)) pontos_b += brancas[c];
            else if (pretas.count(c)) pontos_p += pretas[c];
        }
    }

    if (pontos_b > pontos_p) cout << "White\n";
    else if (pontos_b < pontos_p) cout << "Black\n";
    else cout << "Draw\n";

    return 0;
}

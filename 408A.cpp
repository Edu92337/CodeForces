#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
const int INF = 1e9;

int main() {
    int n;
    cin >> n;
    vector<int> filas(n);
    for (int i = 0; i < n; i++) cin >> filas[i];

    int min_tempo = INF;

    for (int i = 0; i < n; i++) {
        int tempo_parcial = 0;
        for (int j = 0; j < filas[i]; j++) {
            int x;
            cin >> x;
            tempo_parcial += x * 5 + 15;
        }
        if (tempo_parcial < min_tempo) {
            min_tempo = tempo_parcial;
        }
    }

    cout << min_tempo << endl;
    return 0;
}

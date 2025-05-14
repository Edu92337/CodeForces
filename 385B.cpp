#include <bits/stdc++.h>
using namespace std;

int main() {
    string palavra;
    cin >> palavra;
    int n = palavra.size();
    vector<int> inicios;

    for (int i = 0; i + 3 < n; i++) {
        if (palavra.substr(i, 4) == "bear") {
            inicios.push_back(i);
        }
    }

    long long pares = 0;
    int last_end = 0;

    for (int p : inicios) {
        pares += (p - last_end + 1) * (n - (p + 3));
        last_end = p + 1;
    }

    cout << pares << endl;
    return 0;
}

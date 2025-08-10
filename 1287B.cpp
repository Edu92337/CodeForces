#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n, k;
    cin >> n >> k;
    vector<string> palavras(n);
    unordered_set<string> conj; 
    fo(i, n) {
        cin >> palavras[i];
        conj.insert(palavras[i]);
    }
    
    int qnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            string prox(k, ' '); 
            for (int l = 0; l < k; l++) {
                if (palavras[i][l] == palavras[j][l]) {
                    prox[l] = palavras[i][l];
                } else {
                   
                    if (palavras[i][l] != 'T' && palavras[j][l] != 'T') prox[l] = 'T';
                    else if (palavras[i][l] != 'S' && palavras[j][l] != 'S') prox[l] = 'S';
                    else prox[l] = 'E';
                }
            }
            if (conj.count(prox)) qnt++;
        }
    }
    cout << qnt / 3 << endl;
}

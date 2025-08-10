#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    string home, away;
    cin >> home >> away;
    int n;
    cin >> n;

    map<int, int> casa, vizitante;
    set<int> expulsos_casa, expulsos_vizitante; 

    fo(i, n) {
        int t, numero;
        char time, cartao;
        cin >> t >> time >> numero >> cartao;

        if (time == 'h') {
            if (expulsos_casa.count(numero)) continue; 

            if (cartao == 'y') {
                if (casa.count(numero) != 1) {
                    casa[numero] = 1;
                } else {
                    cout << home << " " << numero << " " << t << endl;
                    expulsos_casa.insert(numero); 
                }
            } else {
                cout << home << " " << numero << " " << t << endl;
                expulsos_casa.insert(numero);
            }
        } else {
            if (expulsos_vizitante.count(numero)) continue; 

            if (cartao == 'y') {
                if (vizitante.count(numero) != 1) {
                    vizitante[numero] = 1;
                } else {
                    cout << away << " " << numero << " " << t << endl;
                    expulsos_vizitante.insert(numero); 
                }
            } else {
                cout << away << " " << numero << " " << t << endl;
                expulsos_vizitante.insert(numero);
            }
        }
    }

    return 0;
}

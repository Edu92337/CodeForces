#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> tempos_validos;
    vector<int> tempos_invalidos;
    int tl = 0;
    for (int i = 0;i < n;i++) {
        int v;
        cin >> v;
        tempos_validos.push_back(v);
    }
    for (int i = 0;i < m;i++) {
        int v;
        cin >> v;
        tempos_invalidos.push_back(v);
        
    }
    int menor_valido = *min_element(tempos_validos.begin(),tempos_validos.end());
    int maior_valido = *max_element(tempos_validos.begin(),tempos_validos.end());
    int menor_invalido = *min_element(tempos_invalidos.begin(),tempos_invalidos.end());

    tl = max(2*menor_valido,maior_valido);
    tl < menor_invalido ? cout << tl <<endl : cout << -1 << endl;
    return 0;
}
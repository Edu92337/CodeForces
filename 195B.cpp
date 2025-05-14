#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int n,m;
    cin >> n >> m;
    deque<int> caixas = {0};
    bool esquerda ; 
    m%2 == 0 ? esquerda = false : esquerda = true;
    vector<int> posicoes;
    map<int,int>baldes;
    for (int i = 1; i < m; i++) {
        if (esquerda) {
            caixas.push_front(i);
        } else {
            caixas.push_back(i);
        }
        esquerda = !esquerda; 
    }
    fo(i,caixas.size()){
        baldes[caixas[i]] = i;
    }
    for(int i = 0;i<n ; i++){
        posicoes.push_back(baldes[i%m]+1);
    }
    for(int p : posicoes) cout << p << endl;
    return 0;
}
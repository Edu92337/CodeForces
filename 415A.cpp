#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define endl '\n'

int main() {
    int n,m;
    cin >> n >> m;
    vector<int>botoes(m);
    vector<int>luzes(n,0);
    fo(i,m) cin >> botoes[i];
    for(int botao : botoes){
        for(int i = 0;i < n;i++){
            if(i+1>=botao && luzes[i]==0) luzes[i] = botao;
        }
    }fo(i,n) cout << luzes[i] << " " ;
    return 0;
}
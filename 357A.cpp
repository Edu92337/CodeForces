#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int m,x,y,total = 0,k=0;
    cin >> m;
    vector<int> alunos(m);
    map<int,int> notas;
    fo(i,m) {
        cin>>alunos[i];
        total += alunos[i];
        notas[i+1] = alunos[i];
    }
    cin >> x >> y;
    int qnt = 0;
    for(auto &par : notas){
        qnt += par.second;
        if(qnt >=x && total - qnt >=x && qnt <=y && total - qnt <=y){
            k = max(k,par.first);
        }
    }
    if (k == 0) cout << 0;
    else cout << k+1;
    return 0;
}
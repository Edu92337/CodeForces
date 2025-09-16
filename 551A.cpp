#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >> n;
    vector<int>alunos(n),ordenados(n);
    fo(i,n) cin >> alunos[i];
    ordenados = alunos;
    unordered_map<int,int>posicao;
    sort(all(ordenados));
    int cnt = 1;
    for(int i = n-1;i>=0;i--){
        if(posicao.count(ordenados[i])==0){
            posicao[ordenados[i]]=cnt;
        }
        cnt++;
    }
    for(int a:alunos) cout << posicao[a]<<" ";
    cout << endl;
    return 0;
}
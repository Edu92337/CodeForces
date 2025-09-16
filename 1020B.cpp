#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

const int MAX = 1e3+5;
vector<vector<int>>grafo(MAX);


int dfs(vector<bool>& vis, int v) {
    vis[v] = true;
    
    for(auto u : grafo[v]) {
        if(vis[u]) {
            return u; 
        }
        int resultado = dfs(vis, u);
        if(resultado != -1) {
            return resultado; 
        }
    }
    return -1; 
}

int main() {_
    int n;
    cin >> n;
    fo(i,n){
        int x;cin >> x;
        grafo[i+1].push_back(x);
    }
    for(int a = 1; a <=n; a++) {
        vector<bool>vis(MAX);

        int ciclo = dfs(vis,a);
        if(ciclo != -1) {
            cout  << ciclo <<" ";
        }
        
}

    return 0;
}

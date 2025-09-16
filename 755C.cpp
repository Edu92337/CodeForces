#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

const int MAX = 1e4 + 5;
vector<vector<int>>grafo(MAX);
vector<bool>vis(MAX);
int componentes = 0;

void dfs(int u){
    if(!vis[u])vis[u] = true;
    for(auto v : grafo[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

int main() {_
    int n;
    cin >> n;

    fo(i,n){
        int x;cin >> x;
        grafo[i].push_back(x-1);
        grafo[x-1].push_back(i);
    }
    for(int i =0;i<n;i++){
        if(!vis[i]){
            dfs(i);
            componentes++;
        }
    }cout <<componentes<<endl;
    return 0;
}
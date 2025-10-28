#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int niveis = 0;
int bfs(vector<vector<int>>&grafo,vector<bool>&vis,int v){
    int max_prof=0;
    queue<pair<int,int>>fila;
    fila.push(mp(v,1));
    vis[v]=true;
    while(!fila.empty()){
        auto [atual,nivel] = fila.front();
        fila.pop();
        max_prof = max(max_prof,nivel);
        for(int u:grafo[atual]){
            if(!vis[u]){
                vis[u]=true;
                fila.push(mp(u,nivel+1));
            }
        }
    }
    return max_prof;
}
int main() {_
    int n; cin >> n;
    vector<vector<int>> grafo(n + 1);
    vector<bool> vis(n + 1, false);
    vector<int> chefes;

    fo(i, n) {
        int x; cin >> x;
        if (x != -1) {
            grafo[i + 1].push_back(x);
            grafo[x].push_back(i + 1);
        } else {
            chefes.push_back(i + 1);
        }
    }

    for(int chefe : chefes){
        if(!vis[chefe]){
            niveis = max(niveis, bfs(grafo, vis,chefe));

        }
    }
    

    cout << niveis << endl;
    return 0;
}

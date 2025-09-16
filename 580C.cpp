#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
const int MAX = 1e5+5;
vector<int>gatos(MAX);
vector<vector<int>>grafo(MAX);
vector<bool>vis(MAX);
int qnt = 0;
int sequencia = 0;
bool anterior = false;
int maior_seq = 0;
int n,m;

void dfs(int u ,int sequencia_pai){
    if(!vis[u]) vis[u]=true;
    if(gatos[u]){
        sequencia_pai++;
    }else{
        sequencia_pai=0;
    }
    if(sequencia_pai>m)return;
    if(grafo[u].size()==1 && u!=0){
        qnt++;
        return;
    }
    for(auto v : grafo[u]){
        if(!vis[v]){
            vis[v]=true;
            dfs(v,sequencia_pai);
        }
    }
}


int main() {_
    cin >> n >> m;
    fo(i,n) cin >> gatos[i];
    fo(i,n-1){
        int x,y;
        cin >> x >> y;
        x--;
        y--;
        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }
    if(gatos[0]){
        sequencia++;
    }
    dfs(0,0);
    cout <<qnt<<endl;

    return 0;
}
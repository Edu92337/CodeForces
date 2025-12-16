#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int qnt = 0;
int m;
void dfs(vector<vector<int>>&grafo,vector<bool>&vis,vector<int>&gatos,int v,int cats){
    vis[v]=true;
    if(gatos[v]==0)cats = 0;
    else cats++;
    if(cats>m)return ;
    if(v!=1 && grafo[v].size()==1 ){
        qnt++;
        
        return;
    }
    for(int u : grafo[v]){
        if(!vis[u]){
            vis[u]=true;
            dfs(grafo,vis,gatos,u,cats);
        }
    }
}

int main() {_
    int n;cin >> n >> m;
    vector<int>gatos(n+1);
    fo(i,n) cin >> gatos[i+1];
    vector<bool>vis(n+1,false);
    vector<vector<int>>grafo(n+1);
    fo(i,n-1){
        int x,y;cin >> x >> y;
        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }

    dfs(grafo,vis,gatos,1,0);
    cout <<qnt<<endl;
    return 0;
}
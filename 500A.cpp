#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

bool achou = false;
void dfs(vector<vector<int>>&grafo,vector<bool>&vis,int u,int t){
    vis[u]=true;
    if(u==t){
        achou = true;
        return;
    }
    for(int v : grafo[u]){
        if(!vis[v]){
            dfs(grafo,vis,v,t);
        }
    }
}



int main() {_
    int n,t;cin >> n >> t;
    vector<vector<int>>grafo(n+1);
    vector<bool>vis(n+1,false);
    fo(i,n-1){
        int x;cin >> x;
        grafo[i+1].push_back(x+(i+1));
    }
    dfs(grafo,vis,1,t);
    if(achou)cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
    return 0;
}
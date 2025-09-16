#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

const int MAX = 3e4 + 5;
vector<vector<int>>grafo(MAX);
vector<bool>vis(MAX);
bool tag = false;
void dfs(int v,int x){
    vis[v]=true;
    if(v == x){
        tag = true;
    }
    for(auto u : grafo[v]){
        if(!vis[u]){
            dfs(u,x);
        }
    }
}

int main() {_
    int n,t;
    cin >> n >> t;
    fo(i,n-1){
        int x;cin >> x;
        grafo[i+1].push_back(x+i+1);
    }
    dfs(1,t);
    if(tag) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
    return 0;
}
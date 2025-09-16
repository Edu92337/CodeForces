#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

const int MAX = 1e5 + 5;

vector<bool>vis(MAX);
long long qnt = 0;
long long val = INT_MAX;
void dfs(vector<vector<long long>>&grafo,vector<long long>&custo,long long v){
    vis[v]=true;
    val=min(val,custo[v]);

    for(auto u : grafo[v]){
        if(!vis[u]){
            dfs(grafo,custo,u);
        }
    }
}


int main() {_
    long long n,m;
    cin >> n >> m;
    vector<long long>custo(n);
    vector<vector<long long>>grafo(n);
    fo(i,n) cin >> custo[i];
    fo(i,m){
        long long x,y;
        cin >> x >> y;
        x--;
        y--;
        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }
    for(int i =0;i<n;i++){
        if(!vis[i]){
            dfs(grafo,custo,i);
            qnt+=val;
            val = INT_MAX;
        }
    }
    cout <<qnt<<endl;
    return 0;
}
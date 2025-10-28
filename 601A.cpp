#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int bfs(vector<bool>vis,vector<unordered_set<int>>grafo,int n){
    queue<pair<int,int>>fila;
    fila.push(mp(1,0));
    vis[1]=true;
    while(!fila.empty()){
        auto [no,nivel] = fila.front();
        fila.pop();
        if(no == n)return nivel;
        for(auto u : grafo[no]){
            if(!vis[u]){
                vis[u]=true;
                fila.push(mp(u,nivel+1));
            }
        }
    }
    return -1;
}


int main() {_
    int n,m;cin >> n >> m;
    vector<unordered_set<int>>grafo(n+1);
    vector<unordered_set<int>>roads(n+1);
    fo(i,m){
        int x,y;cin >> x >> y;
        grafo[x].insert(y);
        grafo[y].insert(x);
    }
    bool road = false;
    for(int i = 1;i<=n;i++){
        unordered_set<int>conj;
        for(int j = 1;j<=n;j++){
            if(i==j)continue;
            if (grafo[i].find(j) == grafo[i].end()){
                road = true;
                roads[i].insert(j);
                roads[j].insert(i);
            }
        }
    }
    vector<bool>vis1(n+1,false),vis2(n+1,false);
    int t1 = bfs(vis1,grafo,n);
    int t2 = bfs(vis2,roads,n);
    if (road) {
    if (t1 == -1 || t2 == -1) cout << -1 << endl;
    else cout << max(t1, t2) << endl;
    }
    else cout <<-1<<endl;
    return 0;
}
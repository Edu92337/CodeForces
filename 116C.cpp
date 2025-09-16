#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
const int MAX = 2e3 + 5;
vector<vector<int>>grafo(MAX);
vector<bool>vis(MAX);
int h_max = 1;
void bfs(int u){
    queue<pair<int,int>>fila;
    fila.push(mp(u,1));
    vis[u]=true;
    while(!fila.empty()){
        auto [v,nivel] = fila.front();
        h_max = max(h_max,nivel);
        fila.pop();
        for(auto w:grafo[v]){
            if(!vis[w]){
                vis[w]=true;
                fila.push(mp(w,nivel+1));
            }
        }
    }

}

int main() {_
    int n;
    cin >> n;
    vector<int>raizes;
    fo(i,n){
        int x;cin >> x;
        if(x !=-1){
            grafo[x-1].push_back(i);
        }else raizes.push_back(i);
    }
    for(int no : raizes){
        bfs(no);
    }
    cout <<h_max<<endl;
    
    return 0;
}
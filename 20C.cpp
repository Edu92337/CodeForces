#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int n, m;cin >> n >> m;
    vector<vector<pair<int,int>>> grafo(n+1);
    vector<bool> vis(n+1, false);
    vector<int> pais(n+1, -1);
    vector<int> dist(n+1, INT_MAX);
    fo(i, m) {
        int x, y, w;
        cin >> x >> y >> w;
        grafo[x].push_back(mp(w, y));
        grafo[y].push_back(mp(w, x));
    }
    
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push(mp(0, 1));
    dist[1] = 0;
    while(!pq.empty()) {
        auto [w, v] = pq.top();
        pq.pop();
        
        if(vis[v]) continue;
        vis[v] = true;
        
        if(v == n) {
            vector<int> caminho;
            int atual = v;
            
            while(atual != -1) {
                caminho.push_back(atual);
                atual = pais[atual];
            }
            
            reverse(all(caminho));
            
            for(int x : caminho) 
                cout << x << " ";
            cout << endl;
            return 0;
        }
        
        for(auto [p, u] : grafo[v]) {
            if(!vis[u] && dist[v] + p < dist[u]) {
                dist[u] = dist[v] + p;
                pais[u] = v;
                pq.push(mp(dist[u], u));
            }
        }
    }
    
    cout << -1 << endl;
    return 0;
}

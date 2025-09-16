#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
const int MAX = 105;
vector<bool>vis(MAX);
vector<vector<int>>grafo(MAX);
 
void dfs(int u){
    if(!vis[u])vis[u] = true;
    for(auto v : grafo[u]){
        if(!vis[v]){
            vis[v]=true;
            dfs(v);
        }
    }
}
 
int main() {_
    int n,m;
    cin >> n >> m;
    int total = 0 ;
    vector<set<int>>linguagens;
    fo(i,n){
        int t;cin >> t;
        set<int>linguas;
        total+=t;
        fo(j,t){
            int x;cin >>x ;
            linguas.insert(x);
        }
        linguagens.push_back(linguas);
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            vector<int>inter;
            if(i!=j){
                set_intersection(all(linguagens[i]),all(linguagens[j]),back_inserter(inter));
                if(inter.size()!=0){
                    grafo[i].push_back(j);
                }
            }
        }
    }
    int qnt = 0;
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            dfs(i);
            qnt++;
        }
    }
    if(total ==0)cout << n<<endl;
    else cout <<qnt -1<<endl;
    return 0;
}

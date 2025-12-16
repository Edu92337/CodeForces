#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int n,m;cin >> n >> m;
    vector<vector<int>>grafo(n+5);
    fo(i,m){
        int a,b;cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    int min_soma = INT_MAX;
    bool tag = false;
    for(int i = 1;i<=n;i++){
        if(grafo[i].size()>=2){
            for(int a : grafo[i]){
                for(int b : grafo[i]){
                    if(a==b) continue;
                    if(find(all(grafo[a]), b) != grafo[a].end() && grafo[a].size()>=2 && grafo[b].size()>=2){
                        tag = true;
                        min_soma = min(min_soma, int(grafo[a].size() + grafo[b].size() + grafo[i].size() - 6));
                    }
                }
            }
        }
    }
    if(tag) cout <<min_soma<<endl;
    else cout <<-1<<endl;
    return 0;
}
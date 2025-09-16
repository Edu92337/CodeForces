#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n,m;cin>>n>>m;
    vector<bool>vis(1e4+5);
    queue<pair<int,int>>fila;
    fila.push(mp(n,0));
    vis[n]=true;
    while(!fila.empty()){
        pair<int,int>atual = fila.front();
        fila.pop();
        auto [x,nivel] =atual;
        
        if(x==m){
            cout<<nivel<<endl;
            break;
        }
        if(2*x<=1e4+5 &&!vis[2*x]){
            vis[2*x]=true;
            fila.push(mp(2*x,nivel+1));

        }
        if((x-1>=0 ||x-1>=m)&&!vis[x-1]){
            vis[x-1]=true;
            fila.push(mp(x-1,nivel+1));
        }
    }
    return 0;
}
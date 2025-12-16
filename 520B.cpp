#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

const int MAX = 1e4 + 5;
int solve(int n,int m){
    queue<pair<int,int>>fila;
    vector<bool>vis(MAX,false);
    fila.push(mp(n,0));
    vis[n]=true;
    while(!fila.empty()){
        auto [atual,moves] = fila.front();
        fila.pop();
        if(atual == m)return moves;
        
        if( 2*atual<=MAX && vis[2*atual]==false){
            vis[2*atual]=true;
            fila.push(mp(2*atual,moves+1));
            
        }
        if(atual -1 >0  && vis[atual-1]==false){
            vis[atual-1]=true;
            fila.push(mp(atual-1,moves+1));
            
        }
    }
}




int main() {_
    int n,m;cin >> n >> m;
    cout <<solve(n,m)<<endl;
    return 0;
}
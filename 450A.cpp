#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n,m;cin >> n >> m;
    deque<pair<int,int>>fila(n);
    fo(i,n){
        int x;cin >> x;
        fila[i] = mp(x,i+1);
    }
    while(fila.size()!=1){
        if(fila.front().first-m<=0)fila.pop_front();
        else{
            int x = fila.front().first-m;
            int pos = fila.front().second;
            fila.pop_front();
            fila.push_back(mp(x,pos));
        }
    }
    cout <<fila.front().second<<endl;
    return 0;
}
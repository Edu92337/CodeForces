#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n,x,y;cin >> n >> x >> y;
    int p = n*y;
    if(p%100!=0)p = (n*y/100)+1;
    else p/= 100;
    p=p-x;
    if(p>0) cout<< p<<endl;
    else cout << 0<<endl;
    return 0;
}
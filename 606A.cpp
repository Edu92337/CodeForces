#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int a,b,c;cin >> a>> b>>c;
    int x,y,z;cin >> x >> y>> z;
    int dx,dy,dz;
    dx = a-x;
    dy = b-y;
    dz = c-z;
    bool tag = true;
    if(dx > 0) dx/=2;
    if(dy>0) dy /=2;
    if(dz > 0) dz /=2;
    if(dx+dy+dz>=0)cout <<"Yes"<<endl;
    else cout <<"No"<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

void solve(){
    long long x,y;
    cin >> x >> y;
    long long a,b;
    cin >> a >> b;
    long long qnt = 0;
    qnt = abs(y-x)*a + min(x,y)*min(b,2*a);
    cout <<qnt<<endl;
}

int main() {_
    long long tt;
    cin >>  tt;
    while(tt--){
        solve();
    }
    return 0;
}
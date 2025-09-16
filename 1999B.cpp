#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

void solve(){
    int a1,a2,b1,b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int cnt = 0;
    if( (a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2) ) cnt++;
    if( (a1 > b2 && a2 >= b1) || (a1 >= b2 && a2 > b1) ) cnt++;
    if( (a2 > b1 && a1 >= b2) || (a2 >= b1 && a1 > b2) ) cnt++;
    if( (a2 > b2 && a1 >= b1) || (a2 >= b2 && a1 > b1) ) cnt++;

    cout << cnt<<endl;
}


int main() {_
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
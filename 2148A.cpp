#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int t;cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(y%2==0)cout <<0<<endl;
        else cout <<x<<endl;
    }
    return 0;
}
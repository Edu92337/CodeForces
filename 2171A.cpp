#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

void solve(){
    int n;cin >> n;
    int qnt = 0;
    if(n%2!=0)cout <<0 << endl;
    else{
        for(int c = 0;c <= n;c++){
            for(int v = 0;v <=n;v++){
                if(c*2+v*4 == n)qnt++;
            }
        }
        cout <<qnt<<endl;
    }
}

int main() {_
    int t;cin >> t;
    while(t--)solve();
    return 0;
}
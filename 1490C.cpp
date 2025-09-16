#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

bool busca(long long x){
    for (long long a = 1; a*a*a <= x; a++) {
        long long l = a;
        long long r = cbrt(x);
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            long long val = mid*mid*mid + a*a*a;
            if (val == x) return true;
            else if (val < x) l = mid+1;
            else r = mid-1;
        }
    }
    return false; 
}



void solve(){
    long long x;
    cin >> x;
    bool tag = busca(x);
    if(tag) cout << "YES"<<endl;
    else cout <<"NO"<<endl;
}

int main() {_
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

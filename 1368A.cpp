#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


void solve(){
    long long a,b,n;
    cin >>a>>b>>n;
    long long moves = 0;
    while(a<=n || b<=n){
        if(a<=b){
            a+=b;
            moves++;
        }else{
            b+=a;
            moves++;
        }
    }
    cout<<--moves<<endl;
}

int main() {_
    int t;cin >>t;
    while(t--)solve();
    return 0;
}
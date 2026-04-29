#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

void solve(){
    int n;cin >>n;
    vector<int>a(n);
    long long soma_max = 0;
    long long soma = INFINITY;
    fo(i,n)cin >> a[i];
    for(int i = 1;i<n;i++)soma_max+=abs(a[i]-a[i-1]);
    for(int i = 1;i<n-1;i++){
        long long parcial =soma_max - abs(a[i]-a[i-1])-abs(a[i+1]-a[i])+abs(a[i+1]-a[i-1]);
        soma = min(soma,parcial);
    }
    soma = min(soma,soma_max-abs(a[1]-a[0]));
    soma = min(soma,soma_max-abs(a[n-1]-a[n-2]));
    
    cout<<soma<<endl;

    
}

int main() {_
    int t;cin >> t;
    while(t--)solve();
    return 0;
}
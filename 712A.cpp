#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >>n;
    vector<int>b(n,0);
    vector<int>a(n);
    fo(i,n)cin >>a[i];
    b[n-1]=a[n-1];
    for(int i = n-2;i>=0;i--){
        b[i] = a[i]+a[i+1];
    }
    for(int x :b)cout <<x<<' ';
    cout <<endl;
    return 0;
}
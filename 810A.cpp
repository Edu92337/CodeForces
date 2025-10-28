#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n,k;cin >> n >> k;
    int soma = 0;
    fo(i,n){
        int x;cin >> x;
        soma += x;
    }
    int r = 2*n*k - 2*soma -n;
    if(r>0)cout <<r<<endl;
    else cout<< 0;
    return 0;
}
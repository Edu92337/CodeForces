#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int n,m,d;
    cin >> n >> d;
    vector<int>custos(n);
    fo(i,n) cin >> custos[i];
    sort(all(custos));
    int lucro = 0;
    cin >> m;
    if(m<=n){
        fo(i,m) lucro += custos[i];
    }else {
        fo(i,n) lucro += custos[i] ;
        lucro -= d*(m-n);
    }cout << lucro;

    return 0;
}
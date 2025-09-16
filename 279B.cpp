#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ll long long

bool check(vector<ll>& livros, ll x, ll t) {
    if (x == 0) return true; 

    ll soma = 0;
    for (int i = 0; i < x; i++) soma += livros[i];
    if (soma <= t) return true;

    for (int i = x; i < (int)livros.size(); i++) {
        soma += livros[i] - livros[i - x];
        if (soma <= t) return true;
    }

    return false;
}

ll busca(vector<ll>&livros,ll t){
    ll l = 0,r = livros.size()+1;
    ll mid;
    ll resp = 0;
    while(l<r){
        mid = l+(r-l)/2;
        if(check(livros,mid,t)){
            l = mid+1;
            resp = mid;
        }else r = mid;
    }
    return resp;
}


int main() {_
    ll n,t;
    cin >> n >> t;
    vector<ll>livros(n);
    fo(i,n) cin >> livros[i];
    cout <<busca(livros,t)<<endl;
    return 0;
}
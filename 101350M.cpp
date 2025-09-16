#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


void solve(){
    int c,n;
    cin >> c >> n;
    double qnt = 0;
    unordered_map<string,double>moedas;
    moedas["JD"]=1.0;
    fo(i,c){
        string moeda;
        double valor;
        cin >> moeda >> valor;
        moedas[moeda] = valor;
    }
    fo(i,n){
        double x;
        string s;
        cin >> x >> s;
        qnt += x*moedas[s];
    }
    
    cout <<fixed<<setprecision(6)<<qnt<<endl;
}

int main() {_
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}

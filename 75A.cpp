#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int novo_numero(string x){
    string y = "";
    for( char c: x){
        if(c != '0')y += c;
    }
    return stoi(y);
}


int main() {_
    string a,b;cin >> a >> b;
    long long resultado = stoi(a) + stoi(b);
    ((novo_numero(a) + novo_numero(b)) == novo_numero(to_string(resultado))) ? cout <<"YES"<<endl : cout <<"NO"<<endl;
    return 0;
}
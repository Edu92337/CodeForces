#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int n,m;
    cin >> n >> m;
    string palavra;
    cin >> palavra;
    map<char,char> trocas;
    char c,d ;
    cin >> c >> d;
    trocas[c] = d;
    trocas[d] = c;
    fo(i,m-1){
        char a,b;
        cin >> a>> b;
        for (auto& troca : trocas) {
            char& valor = troca.second;
            if(valor == a) valor = b;
            else if(valor == b ) {
                valor = a;
            }
        }
        if (trocas.count(a) == 0) trocas[a] = b;
        if(trocas.count(b) == 0) trocas[b] = a;
   }
   string nova = "";
    fo(i,n){
        if(trocas.count(palavra[i]) == 1) nova += trocas[palavra[i]];
        else nova += palavra[i];
    }
    cout << nova;

    return 0;
}
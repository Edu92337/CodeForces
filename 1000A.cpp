#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n;
    cin >> n;
    map<string,int>antigas,novas;
    fo(i,n){
        string x;cin >> x;
        antigas[x]++;
    }
    fo(i,n){
        string x;cin >> x;
        novas[x]++;
    }
    int iguais = n;
    for(auto camisa : antigas){
        if(novas[camisa.first]!=0)iguais-= min(camisa.second,novas[camisa.first]);
    }cout <<iguais<<endl;
    return 0;
}
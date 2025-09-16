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
    map<string,int>pilha;
    vector<string>ordem(n);
    fo(i,n){
        string x;cin >> x;
        pilha[x] = n-i-1;
    }
    for(auto [nome,pos] : pilha)ordem[pos] = nome;
    for(string n : ordem){
        if(n.size())cout <<n<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int t;cin >> t;
    string s; cin >> s;
    vector<int>particulas(t);
    fo(i,t){
        cin >> particulas[i];
    }
    int tempo = INFINITY;
    bool tag = false;
    for(int i =0;i<t-1;i++){
        if(s[i]=='R' && s[i+1]=='L'){
            tag = true;
            tempo = min(tempo,(particulas[i+1]-particulas[i])/2);
        }
    }
    if(tag) cout <<tempo<<endl;
    else cout <<-1<<endl;
    return 0;
}
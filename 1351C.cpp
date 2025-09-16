#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

void solve(){
    set<pair<pair<int,int>,pair<int,int>>> posicoes;
    string s;
    pair<int,int> pos = {0,0};
    cin >> s;
    int t = 0;
    for(char c : s){
        pair<int,int> anterior = pos;
        if(c == 'N') pos.second++;
        else if(c == 'S') pos.second--;
        else if(c == 'E') pos.first++;
        else pos.first--;

        if(posicoes.count(mp(anterior, pos)) == 0){
            t += 5;
            posicoes.insert(mp(anterior, pos));
            posicoes.insert(mp(pos, anterior)); 
        } else {
            t += 1;
        }
    }
    cout << t << endl;
}

int main() {_
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

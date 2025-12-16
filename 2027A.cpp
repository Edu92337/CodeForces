#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

void solve(){
    int n;cin >> n;
    vector<pair<int,int>>andares(n);
    int h_max = -1;
    int w_max = -1;
    fo(i,n){
        cin >> andares[i].first>>andares[i].second;
        h_max = max(h_max,andares[i].second);
        w_max = max(w_max,andares[i].first);
    }cout <<2*(h_max+w_max)<<endl;
    
   


}

int main() {_
    int t;cin >> t;
    while(t--)solve();
    return 0;
}
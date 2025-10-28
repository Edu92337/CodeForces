#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    string p1 = "WBWBWBWB";
    string p2 = "BWBWBWBW";
    bool tag  = true;
    fo(i,8){
        string s;cin >> s;
        if(s !=p1 && s!=p2){
            tag = false;
        }
    }
    if(tag) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
    return 0;
}
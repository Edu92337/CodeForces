#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    string s;cin >> s;
    vector<int>h,m;
    for (int i = 0; i + 5 <= s.size(); i++) {
        if (s.substr(i, 5) == "heavy") h.push_back(i);
        if (s.substr(i, 5) == "metal") m.push_back(i);
    }
    long long qnt = 0;
    for(int t : h){
        long long id = upper_bound(all(m), t) - m.begin();
        qnt += (long long)m.size() - id;
    } cout<<qnt<<endl;
    return 0;
}
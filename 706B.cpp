#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >> n;
    vector<int>precos(n);
    fo(i,n)cin >> precos[i];
    sort(all(precos));
    int t;cin >> t;
    for(int i = 0;i<t;i++){
        int m;cin >> m;
        cout <<upper_bound(all(precos),m)-precos.begin()<<endl;
    }
    return 0;
}
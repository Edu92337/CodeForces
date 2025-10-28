#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n; cin >> n;
    vector<int> neg, pos;
    int zeros = 0;

    fo(i,n){
        int x; cin >> x;
        if(x < 0) neg.pb(x);
        else if(x > 0) pos.pb(x);
        else zeros++;
    }

    vector<int> v1, v2, v3;

    v1.pb(neg[0]);

    if((int)(neg.size()-1) % 2 == 0){
        for(int i = 1; i < (int)neg.size(); i++) v2.pb(neg[i]);
    } else {
        for(int i = 1; i < (int)neg.size()-1; i++) v2.pb(neg[i]);
        v3.pb(neg.back());
    }

    for(int x : pos) v2.pb(x);

    fo(i,zeros) v3.pb(0);

    cout << "1 " << v1[0] << endl;

    cout << v2.size() << " ";
    for(int x : v2) cout << x << " ";
    cout << endl;

    cout << v3.size() << " ";
    for(int x : v3) cout << x << " ";
    cout << endl;

    return 0;
}

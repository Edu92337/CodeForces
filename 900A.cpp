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
    int l = 0, r = 0;
    fo(i,n){
        int x,y;cin >> x >> y;
        if(x>0) r++;
        else l++;
    }
    if(l <= 1 || r <= 1)cout <<"Yes"<<endl;
    else cout <<"No"<<endl;
    return 0;
}
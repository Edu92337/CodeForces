#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        if(n%4==0)cout <<n/4<<endl;
        else cout <<1+(n-2)/4<<endl;
    }
    return 0;
}
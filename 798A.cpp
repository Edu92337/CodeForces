#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    string s;cin >> s;
    int n = s.size();
    int pode_usar = 1;
    for(int i = 0;i<n/2;i++){
        if(s[i]!= s[n-i-1]){
            if(pode_usar==1)pode_usar = 0;
            else if(pode_usar == 0){
                cout <<"NO"<<endl;
                return 0;
            }
        }
    }
    if(pode_usar==0)cout <<"YES"<<endl;
    else {
        if(n%2==0)cout <<"NO"<<endl;
        else cout <<"YES"<<endl;
    }
    return 0;
}
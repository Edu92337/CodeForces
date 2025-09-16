#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


void solve(){
    int a,b;
    cin >> a >> b;
    int delta = abs(a-b);
    if(a<b){
        if(delta %2 ==1) cout <<"1"<<endl;
        else cout <<"2"<<endl;
    }else if(a>b){
        if(delta%2 ==0) cout <<"1"<<endl;
        else cout <<"2"<<endl; 
    }else cout <<"0"<<endl;
}


int main() {_
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
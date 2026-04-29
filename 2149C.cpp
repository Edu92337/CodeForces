#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

void solve(){
    int n,k; cin >> n >> k;
    map<int,int>freq;
    int z = 0,c = 0;
    fo(i,n){
        int x;cin >>x;
        freq[x]++;
    }
    for(int i = 0;i<k;i++){
        if(!freq[i])z++;
    }
    c = freq[k];
    cout<<max(z,c)<<endl;
    
}


int main() {_
    int t;cin >>t;
    while(t--)solve();
    return 0;
}
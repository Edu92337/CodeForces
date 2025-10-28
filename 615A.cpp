#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n,m;cin >> n >> m;
    unordered_map<int,int>freq;
    fo(i,n){
        int t;cin >> t;
        fo(j,t){
            int x;cin >> x;
            freq[x]=i+1;
        }
    }
    for(int i = 1;i<=m;i++){
        if(freq[i] == 0){
            cout <<"NO"<<endl;
            return 0;
        }
    }
    cout <<"YES"<<endl;
    return 0;
}
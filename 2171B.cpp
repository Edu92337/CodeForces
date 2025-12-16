#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

void solve(){
    int n;cin >> n;
    vector<int>vec(n);
    fo(i,n)cin >> vec[i];
    if(vec[0]==-1&&vec[n-1]!=-1)vec[0]=vec[n-1];
    fo(i,n){
        if(vec[i]==-1 && i!=n-1)vec[i]=0;
        else if(vec[i]==-1 && vec[0]!=-1)vec[i]=vec[0];
    }
    
    cout <<abs(vec[0]-vec[n-1])<<endl;
    for(int x : vec)cout <<x<<" ";
    cout<<endl;

}


int main() {_
    int t;cin >> t;
    while(t--)solve();
    return 0;
}
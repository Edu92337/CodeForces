#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
//n=7
//3 4 5 2 9 1 1
//3 1 4 1 5 9 2
void solve(){
    int n;cin >>n;
    vector<int>nums(n);
    fo(i,n)cin >>nums[i];
    int l = 0,r =n-1;
    while(l<=r){
        if(l==r)cout<<nums[l];
        else{
            cout<<nums[l]<<" "<<nums[r]<<" ";

        }
        l++;
        r--;
    }cout<<endl;

}


int main() {_
    int t;cin >>t;
    while(t--)solve();
    return 0;
}
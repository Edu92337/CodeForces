#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


void solve(){
    int n;
    cin >> n;
    vector<int>nums(n);
    fo(i,n) cin >> nums[i];
    int menor = nums.back();
    int qnt = 0;
    for(int i = n-2;i>=0;i--){
        if(nums[i]>menor) qnt++;
        else menor = nums[i];
    }
    cout << qnt<<endl;
}

int main() {_
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
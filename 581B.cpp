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
    vector<int>nums(n);
    vector<int>adds(n,0);
    fo(i,n)cin >> nums[i];
    int maior = nums.back();
    for(int i = n-1;i>=0;i--){
        if(nums[i]<=maior && i!= n-1){
            adds[i] = maior-nums[i]+1;
        }
        maior = max(maior,nums[i]);
    }
    for(int x : adds)cout << x<<" ";
    cout <<endl;
    return 0;
}


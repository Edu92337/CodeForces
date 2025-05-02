#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main() {
    int n,k;
    cin >> n >> k;
    vector<int>nums(n);
    for(int i = 0;i<n;i++) cin >> nums[i];
    sort(all(nums),greater<int>());
    if(k > n) cout << -1;
    else {
        int x = nums[k-1];
        cout << x << " " << x;
    }
   
    return 0;
}
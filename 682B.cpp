#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    fo(i,n) cin >> nums[i];
    sort(all(nums));
    if(nums[0] > 1) nums[0] = 1;
    for(int i = 1;i < n;i++){
        if(nums[i] > nums[i-1] +1) nums[i] = nums[i-1] + 1;
    }
    cout << nums[n-1]+1;
    return 0;
}
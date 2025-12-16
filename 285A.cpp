#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int n,k;cin >> n >> k;
    vector<int>nums(n);
    fo(i,n)nums[i]=i+1;
    if(k==n-1) reverse(all(nums));
    else{
        for(int i = 0;i<n-1 ;i+=2){
            if(k==0)break;
            swap(nums[i],nums[i+1]);
            k--;
            
        }
    }
    for(int x:nums)cout <<x <<' ';
    cout<<endl; 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n;
    cin >> n;
    vector<int>nums(n);
    fo(i,n) cin >> nums[i];
    int max_um = 0;
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            int max_local = 0;
            for(int k =0;k<n;k++){
                if(i<=k && k<=j){
                    if(nums[k]==0)max_local++;
                    
                }
                else if(nums[k]==1)max_local++;
            }
            
            max_um = max(max_local,max_um);
        }
    }
    cout << max_um<<endl;
    return 0;
}
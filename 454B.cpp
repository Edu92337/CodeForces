#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >> n;
    vector<int>nums(n);
    fo(i,n) cin >> nums[i];
    int inicial = nums.front();
    int pos_i=0;
    int t =1;
    int i =1;
    bool inv = false;
    for(i;i<n;i++){
        if(nums[i] < nums[i-1]){
            if(inicial < nums[i]){
                cout << -1<<endl;
                return 0;
            }else{
                if(inv){
                    cout <<-1<<endl;
                    return 0;
                }
                inicial = nums[i];
                inv = true;
                t = max(t,i-pos_i);
                pos_i = i;
            }
        }else{
            t++;
            if(i == n-1){
                if(inv && nums[i] > nums[0]){
                    cout << -1<<endl;
                    return 0;
                }
            }
        }
    }
    
    if(t == n) cout <<0<<endl;
    else cout <<n-pos_i<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

vector<int> k_sum(vector<int> vec, int k) {
    map<int, vector<int>> indices;
    
    for(int i = 0; i < vec.size(); i++) {
        indices[vec[i]].push_back(i);
    }
    
    for(int i = 0; i < vec.size(); i++) {
        int complemento = k - vec[i];
        if(indices.count(complemento)) {
            if(complemento != vec[i]) {
                return {i, indices[complemento][0]};
            }
            else if(indices[complemento].size() > 1) {
                return {i,indices[complemento][1]};
            }
        }
    }
    return {-1};
}

int main() {
    int x;
    cin >> x;
    vector<int> nums(x);
    fo(i,x) cin >> nums[i];
    bool tag = false;
    for(int i = 0; i < nums.size(); i++) {
        vector<int> indices = k_sum(nums, nums[i]);
        if(indices.size() == 2) {
            tag = true;
            cout << i+1<<" " << indices[0]+1 << " " << indices[1]+1 << endl;
            break;
        }
    }
    if(tag == false) cout << -1;
    
    return 0;
}
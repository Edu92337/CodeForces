#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    vector<int>nums(n);
    fo(i,n) cin >> nums[i];
    while (true)
    {
        bool tag = true;
        for(int i = 0;i<n;i++){
            int maior = -1;
            for(int j = 0;j<n;j++){
                if(nums[j] < nums[i]){
                    tag = false;
                    if(nums[j] > maior) maior = nums[j];
                }
            }
            if(maior != -1) nums[i] -= maior;
            
        }
        if(tag == true) break;
    }
    cout << accumulate(all(nums),0);
    

    return 0;
}
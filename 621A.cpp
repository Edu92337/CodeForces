#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    vector<long long int>nums(n);
    for(int i =0;i<n;i++) cin >> nums[i];
    long long int soma = accumulate(nums.begin(),nums.end(),0LL);
    sort(nums.begin(),nums.end());
    if(soma % 2 == 0) cout <<soma;
    else{
        for(int i = 0;i<n;i++){
            if(nums[i] %2 != 0){
                soma -= nums[i];
                break;
            } 
        }
        cout << soma;
    }
    return 0;

}
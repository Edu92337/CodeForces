#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n,k;cin >> n >>k;
    vector<int>nums(n);
    fo(i,n) cin >> nums[i];
    int peso = accumulate(nums.begin(),nums.begin()+k,0);
    int menor_peso = peso;
    int l = 1;
    for(int i = k;i<n;i++){
        peso += nums[i];
        peso -= nums[i-k];
        if(peso<menor_peso){
            menor_peso=peso;
            l = i-k+2;
        }
        
    }cout <<l<<endl;
    return 0;
}
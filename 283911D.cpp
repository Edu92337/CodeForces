#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ll long long

ll busca_lower(vector<ll>&nums,ll menor){
    ll l = 0,r = nums.size();
    ll mid;
    while(l<r){
        mid = l+(r-l)/2;
        if(nums[mid]<menor) l = mid+1;
        else r = mid;
    }return l;
}

ll busca_upper(vector<ll>&nums,ll maior){
    ll l = 0,r = nums.size();
    ll mid;
    while(l<r){
        mid = l+(r-l)/2;
        if(nums[mid]<=maior) l = mid+1;
        else r = mid;
    }return l;
}


int main() {_
    int n;
    cin >> n;
    vector<ll> nums(n);
    fo(i,n) cin >> nums[i];
    sort(all(nums));
    int k;
    cin >> k;
    while(k--){
        ll l,r;
        cin >> l >> r;
        ll menor = busca_lower(nums,l);
        ll maior = busca_upper(nums,r);
        cout << maior - menor<<" ";
    }
    return 0;
}
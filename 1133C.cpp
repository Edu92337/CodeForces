#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

bool check(vector<int>&a,int t){
    int n = a.size();
    for(int i = 0;i+t-1 < n;i++){
        if(a[t+i-1]-a[i]<=5)return true;
    }return false;
}
int busca(vector<int>& a){
    int l = 1, r = a.size();
    int ans = 1;
    while(l <= r){
        int mid = l + (r-l)/2;
        if(check(a,mid)){
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}


int main() {_
    int n;cin >> n;
    vector<int>a(n);
    fo(i,n)cin >> a[i];
    sort(all(a));
    cout <<busca(a)<<endl;
    return 0;
}
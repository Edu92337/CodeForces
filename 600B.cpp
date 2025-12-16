#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int bb(vector<int>&a,vector<int>&b,int x){
    int l=0,r=a.size()-1;
    int mid;
    while(l<=r){
        mid = l + (r-l)/2;
        if(a[mid]<=x) l = mid+1;
        else r = mid-1 ;
    }
    return l;
}
int main() {_
    int n,m;cin >> n >> m;
    vector<int>a(n),b(m);
    fo(i,n) cin >> a[i];
    fo(i,m) cin >> b[i];
    sort(all(a));
    for(int x : b){
        cout <<bb(a,b,x)<<" ";
    }
    return 0;
}

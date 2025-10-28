#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    long long n,k;cin >> n >> k;
    vector<int>a(n);
    fo(i,n) cin >> a[i];
    int power = a[0];
    int vic = 0;
    for(int i = 0;i<n;i++){
        if(a[i]<power) vic++;
        if(vic == k)break;
        else if(a[i] > power){
            power = a[i];
            vic = 1;
        }
    }cout <<power<<endl;
    return 0;
}
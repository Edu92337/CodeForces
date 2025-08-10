#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ll long long
int main() {_
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>vec(n);
        fo(i,n) cin >> vec[i];
        sort(all(vec),[&](ll i,ll j){
            if(i>j) return abs(i-j)>= j-i;
            else return abs(i-j)>=j-i;
        });
        for(ll i: vec) cout << i<<" ";
        cout <<endl;
    }
    return 0;
}
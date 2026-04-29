#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'


int comb(int n){
    return n*(n-1)/2;
}


int main() {_
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        unordered_set<int>conj;
        for(int i = 0;i<=9;i++)conj.insert(i);
        for(int i = 0;i<n;i++){
            int x;cin >> x;
            conj.erase(x);
        }
        cout << 6*comb(conj.size())<<endl;

    }
    return 0;
}
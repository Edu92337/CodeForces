#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end()); 
        
        int ans = 0;
        int m = a.size();
        
        for(int i = 0; i < m; i++) {
            int mex = 0;
            for(int j = i; j < m && a[j] - a[i] == mex; j++) {
                mex++;
            }
            ans = max(ans, mex);
        }
        
        cout << ans << endl;
    }
    return 0;
}

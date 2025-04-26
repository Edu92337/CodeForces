#include <bits/stdc++.h>
using namespace std;

int main(){
    int y,k,n;
    cin >> y >> k >> n;
    vector<int>x;
    int i ;
    i = k - y%k;
    if (y%k==0)i = 0;
    for( i;i<=n-y;i+=k){
        if (i > 0) x.push_back(i);
    }
    if (x.empty()) cout << -1;
    else for (int val : x) cout << val << " ";
    return 0;
}
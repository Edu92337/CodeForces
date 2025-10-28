#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >> n;
    vector<int>a(n);
    fo(i,n)cin >> a[i];
    sort(all(a));
    int x = 1;
    
        for(int i = 0;i<n;i++){
        if(a[i]!=x){
            cout <<x<<endl;
            return 0;
        }x++;
    }
    cout <<x<<endl;
    return 0;
}
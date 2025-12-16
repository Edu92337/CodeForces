#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >> n;
    vector<int> a(n);
    fo(i,n)cin >> a[i];
    sort(all(a));
    long long qnt = 0;
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]==a[i]){
                qnt++;
                a[j]=a[i]+1;
            }
        }
    }cout <<qnt<<endl;
    return 0;
}
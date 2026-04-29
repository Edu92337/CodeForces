#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

/*
a=1
b=3
[5,6]

*/

int main() {_
    int n;cin >> n;
    vector<int>tempos(n);
    fo(i,n-1)cin>>tempos[i];
    int a,b;cin >> a>>b;
    int t=0;
    for(int i = a-1;i<b-1;i++){
        t+=tempos[i];
    }cout<<t<<endl;
    return 0;
}
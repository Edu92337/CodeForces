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
    int b=0,c=0;
    fo(i,n){
        int x;cin >> x;
        if(x<0)c+=x;
        else b+=x;
    }
    cout <<b-c<<endl;
    return 0;
}
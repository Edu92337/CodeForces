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
    if(n%2==0){
        cout << n/2<<endl;
        fo(i,n/2) cout <<2<<" ";
        cout <<endl;
    }else{
        n -= 3;
        cout <<n/2 +1<<endl;
        fo(i,n/2)cout <<2<<" ";
        cout <<3<<endl;
    }
    return 0;
}
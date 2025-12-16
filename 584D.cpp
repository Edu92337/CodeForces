#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'


bool isprime(int x){
    for(int d = 2;d*d<=x;d++){
        if(x%d==0)return false;
    }
    return true;
}


int main() {_
    int n;cin >> n;
    if(isprime(n))cout <<1<<endl<<n<<endl;
    else{
        for(int d=2;d<=n;d++){
            if(isprime(d) && isprime(n-2*d)){
                cout <<3<<endl;
                cout <<d<<" "<<d<<" "<<n-2*d<<endl;
                break;
            }
        }
    }
    return 0;
}
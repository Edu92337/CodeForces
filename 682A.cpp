#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

/*

6 12 

1 2 3 4 5 6                7 8 9 10
1 2 3 4 5 6 7 8 9 10 11 12
(x+y)mod 5 == 0 -> (0,0) (4,1) (3,2)


*/

int main() {_
    long long n,m;cin >> n >> m;
    long long  r0n = n/5 ,r1n = (n+4)/5 , r2n = (n+3)/5,r3n = (n+2)/5,r4n = (n+1)/5;
    long long r0m = m/5 ,r1m = (m+4)/5 , r2m = (m+3)/5,r3m = (m+2)/5,r4m = (m+1)/5;

    cout << (long long)r0n*r0m + r4n*r1m + r3n*r2m + r4m*r1n + r3m*r2n<<endl;
    return 0;
}


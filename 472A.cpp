#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'



int main() {_
    long long n;
    cin >> n;
    vector<bool>primos(n+1,true);
    primos[0]=false;
    for(long long i = 4;i<=n;i+=2)primos[i]=false;
    for(long long i = 3;i<=n;i+=2){
        if(primos[i]){
            for(long long j = i*i;j<=n;j+=2*i)primos[j]=false;
        }
    }
    for(long long i = n-1;i>=1;i--){
        long long resto = n%i;
        if(!primos[i] && !primos[resto]){
            if(resto+i==n){
                cout << resto <<" "<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
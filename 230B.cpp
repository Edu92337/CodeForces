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
    vector<long long>nums(n);
    long long m=0;

    fo(i,n){
        cin >> nums[i];
        m = max(m,nums[i]);
    }
    long long r = sqrt(m);
    vector<bool>primos(r+1,true);
    primos[0]=primos[1]=false;
    for(long long i = 4;i<=r;i+=2)primos[i]=false;
    for(long long i = 3;i<=r;i+=2){
        if(primos[i]){
            for(long long j = i*i;j<=r;j+=2*i)primos[j]=false;
        }
    }
    for(long long x : nums){
        long long raiz = sqrt(x);
        if(primos[raiz]&&raiz*raiz == x)cout<<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
    return 0;
}
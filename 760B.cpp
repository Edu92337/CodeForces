#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

long long soma_lado(long long D, long long qnt){
    if(D >= qnt)
        return qnt*(qnt+1)/2 + (D - (qnt-1));
    else
        return (2*qnt - D) * (D+1) / 2;
}

bool solve(long long n,long long m,long long k,long long qnt){
    long long left  = k - 1;
    long long right = n - k;

    long long soma = soma_lado(left, qnt)+ soma_lado(right, qnt)- qnt; 

    return soma <= m;
}


long long busca(long long n,long long m, long long k){
    long long l = 1,r = m;
    long long mid;
    while(l<=r){
        mid = l + (r-l)/2;
        if(solve(n,m,k,mid))l= mid+1;
        else r = mid-1;
    }return r;
}


int main() {_
    long long n,m,k;cin >> n >> m >> k;
    cout <<busca(n,m,k)<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

bool check(int n,int k ,int x){
    long long soma = x;
    long long pot = k;
    while(pot <= x){
        soma += x/pot;
        pot *=k;
    }
    return soma >= n;
}


int main() {_
    int n,k;cin >> n >> k;
    int l = 1;
    int r = n;
    long long mid;
    while(l<r){
        mid = l +(r-l)/2;
        if(check(n,k,mid))r = mid;
        else l = mid+1;
    }
    cout << l<<endl;
    return 0;
}
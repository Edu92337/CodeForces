#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


int busca(int n,int k){
    int l = 0,r = n;
    int tempo = 240-k;
    int mid;
    int resp;
    while(l<=r){
        mid = l + (r-l)/2;
        if(5*(mid+1)*mid/2 <=tempo){
            resp = mid;
            l = mid+1 ;
        }
        else r = mid-1;
    }
    return resp;
}

int main() {_
    int n,k;
    cin >> n >> k;
    cout<<busca(n,k);
    return 0;
}
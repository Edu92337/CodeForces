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
    map<int,int>freq;
    fo(i,n){
        int x;cin >> x;
        freq[x]++;
    }
    int faltantes = 0;
    int pode_gastar = 0;
    for(int i = 1;i<=n;i++){
        if(freq[i]==0){
            faltantes++;
        }else if(freq[i]>1){
            pode_gastar += freq[i]-1;
        }
    }
    cout<<faltantes<<endl;
    
    return 0;
}
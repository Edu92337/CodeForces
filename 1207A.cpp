#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int t;cin >> t;
    while(t--){
        int val = 0;
        int b,p,f;cin >> b >> p >> f;
        int h,c; cin >> h >> c;
        if(h>c){
            int duplas_pao = b/2;
            int qnt = min(duplas_pao,p);
            b -= 2*qnt ;
            p -= qnt;
            val += h*qnt;
            duplas_pao = b/2;
            qnt = min(duplas_pao,f);
            b -= 2*qnt ;
            f -= qnt;
            val += c*qnt;
            
        }else{
            int duplas_pao = b/2;
            int qnt = min(duplas_pao,f);
            b -= 2*qnt ;
            f -= qnt;
            val += c*qnt;
            duplas_pao = b/2;
            qnt = min(duplas_pao,p);
            b -= 2*qnt ;
            p -= qnt;
            val += h*qnt;
        }
    cout <<val<<endl;
    }
    return 0;
}
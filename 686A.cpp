#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    long long  n,x;
    cin >> n >> x;
    long long qnt =x;
    long long criancas = 0;
    fo(i,n){
        char op;
        long long v;
        cin >> op >> v;
        if(op == '+') qnt += v;
        else{
            if(v > qnt){
                criancas++;
            }else{
                qnt -= v;
            }
        }

    }cout <<qnt <<" "<<criancas<<endl;
    return 0;
}
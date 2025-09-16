#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

void solve(){
    int q,t;
    cin >> q >> t;
    int t_atual=0,p=0;
    int qnt = 0;
    fo(i,q){
        int t_f,p_f;
        cin >> t_f>>p_f;
        if(p==p_f){
            if(t_f-t_atual>1 && (t_f-t_atual)%2==0)qnt+=t_f-t_atual;
            else if(t_f-t_atual>1 && (t_f-t_atual)%2!=0)qnt+=t_f-t_atual-1;
            t_atual = t_f;
            p=p_f;
            
        }else {
            if((t_f-t_atual>1)&&(t_f-t_atual)%2==0)qnt += t_f-t_atual-1;
            else qnt += t_f-t_atual;
            t_atual = t_f;
            p=p_f;
        }
    }
    if(t_atual < t){
        qnt+=(t-t_atual);
    }
    cout <<qnt<<endl;
}

int main() {_
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}
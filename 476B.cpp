#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

long long inicial = 0;
float n = 0,qnt=0;
float prob ;
void solve(long long i,long long pos,string recebido){
    if(i>=recebido.size()){
        qnt++;
        if(pos == inicial ){
            n++;
        }
        return;
    }
    if(recebido[i]=='?'){
        solve(i+1,pos+1,recebido);
        solve(i+1,pos-1,recebido);
    }else{
        if(recebido[i]=='+') solve(i+1,pos+1,recebido);
        else if(recebido[i]=='-') solve(i+1,pos-1,recebido);
    }
}

int main() {_
    string enviado,recebido;
    cin >> enviado;
    cin >> recebido;
    for(char c : enviado){
        if(c == '+') inicial++;
        else inicial--;
    }
    solve(0,0,recebido);
    prob = n/qnt;
    cout << fixed << setprecision(12)<<prob<<endl;
    return 0;
}
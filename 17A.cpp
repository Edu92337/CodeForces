#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

bool primo(int x){
    for(int i = 2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}

int main() {_
    int n,k;cin >> n >> k;
    vector<int>primos;
    for(int i =2;i<=n;i++){
        if(primo(i))primos.push_back(i);
    }
    int qnt = 0;
    for(int i = 0;i<primos.size()-1;i++){
        if(primo(primos[i]+primos[i+1]+1) && (primos[i]+primos[i+1]+1)<=n){
            qnt++;
        }
    }
    if(qnt>=k)cout<<"YES"<<endl;
    else cout <<"NO"<<endl;
    return 0;
}
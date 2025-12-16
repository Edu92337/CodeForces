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
    vector<int>adj;
    int inicio_impares =(n%2==0?n-1:n);
    for(int i = inicio_impares;i>=1;i-=2){
        adj.push_back(i);
    }
    int inicio_pares =(n%2==0?n:n-1);

    for(int i=inicio_pares;i>=2;i-=2){
        if(abs(adj.back()-i)>1)adj.push_back(i);
    }cout <<adj.size()<<endl;
    for(int x:adj)cout <<x <<" ";
    cout <<endl;
    
    return 0;
}
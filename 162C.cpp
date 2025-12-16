#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

vector<int> fat(int n){
    vector<int>f;
    int m  = n;
    for(int i = 2;i*i<=m;i++){
        while(n%i==0){
            f.push_back(i);
            n/=i;
        }
    }
    if(n>1)f.push_back(n);
    return f;
}

int main() {_
    int n;cin >> n;
    vector<int>fatores = fat(n);
    for(int i = 0;i<fatores.size();i++){
        if(i<fatores.size()-1)cout <<fatores[i]<<"*";
        else cout <<fatores[i];
    }cout <<endl;
    return 0;
}
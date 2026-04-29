#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    map<int,int>freq;
    for(int i = 0;i<5;i++){
        int x;cin >> x;
        freq[x]++;
    }
    int v=0;
    for(auto[x,f]:freq){
        if(f==2)v= max(v,2*x);
        else if(f>=3)v = max(v,3*x);
        
    }
    long long soma = 0;
    for(auto[x,f]:freq)soma+=x*f;
    cout <<soma-v<<endl;
    return 0;
}
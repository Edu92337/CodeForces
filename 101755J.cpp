#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n;
    cin >> n;
    map<int,int>freq;
    fo(i,n){
        int x;
        cin >> x;
        freq[x]++;
    }
    int qnt = 0;
    for(auto par:freq){
        qnt += par.second/2;
    }

    cout <<qnt/2<<endl;
    return 0;
}
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
    int m;cin >> m;
    int qnt = 0;
    int cap = 0;
    vector<int>capacidades(n);
    fo(i,n) cin >> capacidades[i];
    sort(all(capacidades),greater<int>());
    for(int c : capacidades){
        if(cap<m){
            cap+=c;
            qnt++;
        }else break;
    }cout <<qnt<<endl;
    return 0;
}
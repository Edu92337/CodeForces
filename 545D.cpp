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
    vector<int>tempos(n);
    fo(i,n) cin >> tempos[i];
    sort(all(tempos));
    int t = 0;
    int qnt = 0;
    for(int p : tempos){
        if(t <= p){
            qnt++;
            t+=p;
        }
        
    }cout <<qnt<<endl;
    
    return 0;
}
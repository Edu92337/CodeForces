#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >> n;
    unordered_set<int>conj;
    vector<int>resp(n,0);
    int m=1;
    fo(i,n){
        
        int x;cin >> x;
        if(n==1){
            cout <<1;
            break;
        }
        if(conj.count(x)==0 && x<=n){
            resp[i]=x;
            conj.insert(x);
        }
    }
    fo(i,n){
        if(resp[i]==0){
            while(conj.count(m))m++;
            resp[i]=m;
            m++;
        }
    }
    if(n!=1) for(int x: resp) cout <<x<<" ";
    cout <<endl;
    return 0;
}
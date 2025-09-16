#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int k;cin >> k;
    map<int,int>freq;
    fo(i,4){
        string s;
        cin >>s;
        fo(j,4){
            freq[s[j]]++;
        }
    }
    for(auto par:freq){
        if(par.first!='.'&&par.second>2*k){
            cout<<"NO"<<endl;
            return 0;
        }
    }cout<<"YES"<<endl;
    return 0;
}
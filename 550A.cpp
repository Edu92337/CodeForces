#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

string solve(string& s){
    int n = s.size();
    vector<int>pos_ab,pos_ba;
    for(int i = 0;i<n-1;i++){
        string sub = s.substr(i,2);
       if (sub == "AB"){
            pos_ab.push_back(i);
       }
       if(sub == "BA")pos_ba.push_back(i);
    }
    if(pos_ab.size()==0 || pos_ba.size()==0) return "NO";

    //ABABAB -> [0,1,2,3,4] YES
    //ABA -> [0,1] NO

    for(int pa: pos_ab){
        for(int pb: pos_ba){
            if(abs(pa-pb)>1)return "YES";
        }
    }return "NO";
}

int main() {_
    
    string s;cin >> s;
    cout <<solve(s)<<endl;
    
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    string s; cin >> s;
    unordered_map<string,string>code;
    for(int i =0;i<10;i++){
        string g;cin >> g;
        code[g] = to_string(i);
    }
    string senha = "";
    for(int i = 0;i<80;i+=10){
        string sub = s.substr(i,10);
        senha += code[sub];
    }cout <<senha<<endl;
    
    return 0;
}
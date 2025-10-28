#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    string s;cin >> s;
    int pos = -1;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='0' && pos == -1){
            pos = i;
        }
    }
    if(pos!=-1){
        for(int i = 0;i<s.size();i++){
            if(i!=pos) cout <<s[i];
        }
    }else{
        for(int i = 0;i<s.size()-1;i++)cout <<s[i];
    }
    cout <<endl;

    return 0;
}
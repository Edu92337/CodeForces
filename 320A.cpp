#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    string s;cin >> s;
    string p[] = {"114","144","141","441","414","411","111"};
    if(s.size()<3){
        if(s=="1" || s=="14" ||s=="11")cout <<"YES"<<endl;
        else cout <<"NO"<<endl;
    }else if(s.size()==3){
        if(s=="111"||s=="144"||s=="114"||s=="141")cout<<"YES"<<endl;
        else cout <<"NO"<<endl;
    }
    else{
        for(int i = 0;i<s.size()-2;i++){
            string sub = s.substr(i,3);
            bool tag = false;
            for(string x : p){
                if(sub==x)tag = true;
            }
            if(i==0 && (sub!="111"&& sub!="144"&&sub!="114"&&sub!="141"))tag = false;
            if(tag == false){
                cout <<"NO"<<endl;
                return 0;
            }
            
        }
        cout <<"YES"<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    string s;
    cin >> s;
    stack<char>st;
    bool tag=false;
    for(char c: s){
        if(st.size()==0) st.push(c);
        else if(st.top()==c){
            tag =!tag;
            st.pop();
        } 
        else st.push(c);
        
    }
    if(st.size()!=0){
        if(!tag) cout << "No"<<endl;
        else cout <<"Yes"<<endl;
    }else{
        if(tag) cout << "Yes"<<endl;
        else cout <<"No"<<endl;
    }
    
    return 0;
}
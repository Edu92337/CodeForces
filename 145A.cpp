#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    string a,b;
    cin >> a ;
    cin >> b ;
    int q74=0,q47=0;
    for(int i = 0;i<a.size();i++){
        if(a[i]=='7' && b[i]=='4')q74++;
        if(a[i]=='4'&&b[i]=='7')q47++;
    }
    if(q47==q74) cout<< q74<<endl;
    else{
        cout <<max(q74,q47)<<endl;
    }

    
    return 0;
}
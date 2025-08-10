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
    while(n--){
        string a,b,c;
        cin >> a;
        cin >> b;
        cin >> c;
        bool tag = true;
        for(int i = 0;i<a.size();i++){
            if(a[i]!=b[i]){
                if(c[i]==a[i] && c[i]!=b[i]) b[i] = c[i];
                else if(c[i]==b[i] && c[i]!=a[i]) a[i] = c[i];
                else{
                    tag = false;
                    break;
                }
            }else{
                if(c[i]!=a[i]) tag = false;
            }
        }
        if(tag){
            cout <<"Yes"<<endl;
        }else cout <<"NO"<<endl;
    }
    

    return 0;
}
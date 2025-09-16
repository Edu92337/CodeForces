#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n,m;
    cin >> n >> m;
    bool inicio = false;
    for(int i = 0;i<n;i++){
        if(i%2==0){
            for(int j =0;j<m;j++)cout <<'#';
            cout<<endl;
        }else{
            if(inicio){
                cout <<'#';
                for(int j =0;j<m-1;j++)cout <<'.';
                cout <<endl; 
            }else{
                for(int j =0;j<m-1;j++)cout <<'.';
                cout <<'#'<<endl;
            }
            inicio = !inicio;

        }
    }
    return 0;
}
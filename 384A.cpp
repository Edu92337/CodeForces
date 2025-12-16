#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >> n;
    int qnt = 0;
    vector<vector<char>>mat(n,vector<char>(n,'.'));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if((i+j)%2==0){
                mat[i][j]='C';
                qnt++;
            }
        }
    }
    cout <<qnt<<endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<mat[i][j];
        }cout <<endl;
    }

    return 0;
}
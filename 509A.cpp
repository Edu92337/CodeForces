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
    vector<vector<int>>mat(n,vector<int>(n,0));
    for(int i  = 0;i<n;i++)mat[0][i]=1;
    for(int i = 1;i<n;i++){
        for(int j = 0;j<n;j++){
            int esquerda = 0;
            if(j>0)esquerda = mat[i][j-1];
            mat[i][j]=mat[i-1][j] + esquerda;
        }
    }cout <<mat[n-1][n-1]<<endl;
    return 0;
}
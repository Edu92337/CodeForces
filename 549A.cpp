#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int n,m;cin >> n >>m;
    vector<vector<char>>mat(n,vector<char>(m,'x'));
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin >> mat[i][j];
        }
    }
    int qnt = 0;
    set<char>conj = {'f','a','c','e'};
    for(int i =0;i<n-1;i++){
        for(int j = 0;j<m-1;j++){
            set<char>teste;
            teste.insert(mat[i][j]);
            teste.insert(mat[i][j+1]);
            teste.insert(mat[i+1][j]);
            teste.insert(mat[i+1][j+1]);
            if(teste == conj)qnt++;
        }
    }cout <<qnt<<endl;
    return 0;
}
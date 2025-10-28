#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int consec(vector<int>linha,int m){
    int maximo = 0;
    int atual = 0;
    fo(i,m){
        if(linha[i]==0)atual = 0;
        else atual += 1;
        maximo = max(maximo,atual);
    }
    return maximo;
}


int main() {_
    int n,m,q;cin >> n >> m >> q;
    vector<vector<int>>mat(n,vector<int>(m,0));
    fo(i,n){
        fo(j,m){
            cin >> mat[i][j];
        }
    }
    fo(x,q){
        int i,j;cin >> i >> j;
        i--;
        j--;
        if(mat[i][j]==1)mat[i][j]=0;
        else mat[i][j]=1;
        int maximo = 0;
        fo(i,n){
            maximo = max(consec(mat[i],m),maximo);
        }cout <<maximo<<endl;

    }
    return 0;
}
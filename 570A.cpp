#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>>mat(m,vector<int>(n,0));
    vector<pair<int,int>>candidatos(n,pair<int,int>(0,0));
    fo(i,m){
        fo(j,n) cin >> mat[i][j];
    }
    fo(i, m){
        int maior = *max_element(all(mat[i]));
        fo(j, n){
            if(mat[i][j] == maior ){
                candidatos[i];
            }
        }
        
    }
    
    return 0;
}
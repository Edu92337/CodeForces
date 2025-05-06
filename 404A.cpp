#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int n;
    cin >> n;
    vector<vector<char> >mat(n,vector<char>(n));
    fo(i,n){
        fo(j,n)cin >> mat[i][j];
    }
    char anterior_diag=mat[0][0];
    char anterior_mat = mat[0][1];
    bool tag = true;
    fo(i,n){
        fo(j,n){
            if(anterior_diag == anterior_mat){
                tag = false;
                break;
            }
            if ((i == j && mat[i][j] != anterior_diag) || (i == n - j - 1 && mat[i][j] != anterior_diag)) {
                tag = false;
                break;
            }
            else if((i == j && mat[i][j] == anterior_diag) || (i == n - j - 1 && mat[i][j] == anterior_diag)){
                anterior_diag = mat[i][j];
            }
            if(i != j && i != n - j - 1){
                if(mat[i][j] != anterior_mat){
                    tag = false;
                    break;
                }
                else anterior_mat = mat[i][j];
            }
        }
    }
    tag == true ? cout << "YES" : cout << "NO";

    
    return 0;
}
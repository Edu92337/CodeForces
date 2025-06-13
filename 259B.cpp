#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    vector<vector<int>>mat(3,vector<int>(3,0));
    fo(i,3){
        fo(j,3) cin >> mat[i][j];
    }
    int s = (mat[0][2] + mat[2][0] + mat[0][1]+mat[0][2]+mat[2][0]+mat[2][1])/2;
    mat[0][0] = s - (mat[0][1]+mat[0][2]);
    mat[1][1] = s - (mat[1][0]+mat[1][2]);
    mat[2][2] = s - (mat[2][0]+mat[2][1]);
    
    
    fo(i,3){
        fo(j,3) cout << mat[i][j] <<" ";
        cout << endl;
    }

    return 0;
}
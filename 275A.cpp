#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int x[4] = {1,0,-1,0};
int y[4] = {0,1,0,-1};

void inverte_vis(vector<vector<int>>&mat,int i ,int j){
    if(mat[i][j]==0)mat[i][j]=1;
    else mat[i][j]=0;
    for(int k = 0 ;k<4;k++){
        int nx = j + x[k];
        int ny = i + y[k];
        if(nx>=0 &&nx<3 && ny>=0 && ny<3){
            if(mat[ny][nx]==0)mat[ny][nx]=1;
            else mat[ny][nx]=0;
        }
    }
}

int main() {_
    vector<vector<int>>mat(3,vector<int>(3,1));
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            int x ;cin >> x;
            if(x%2!=0){
                inverte_vis(mat,i,j);
            }
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout <<mat[i][j];
        }cout <<endl;
    }
    return 0;
}
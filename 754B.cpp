#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

bool check(char a, char b, char c) {
    return (a == 'x' && b == 'x' && c == '.') ||
           (a == 'x' && b == '.' && c == 'x') ||
           (a == '.' && b == 'x' && c == 'x');
}

int main() {_
    vector<vector<char>> mat(4, vector<char>(4, '0'));
    fo(i, 4) {
        fo(j, 4) cin >> mat[i][j];
    }
    bool vitoria = false;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            if(check(mat[i][j], mat[i][j+1], mat[i][j+2])) {
                vitoria = true;
            }
        }
    }

    
    for(int j = 0; j < 4; j++) {
        for(int i = 0; i < 2; i++) {
            if(check(mat[i][j], mat[i+1][j], mat[i+2][j])) {
                vitoria = true;
            }
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            if(check(mat[i][j], mat[i+1][j+1], mat[i+2][j+2])) {
                vitoria = true;
            }
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 2; j < 4; j++) {
            if(check(mat[i][j], mat[i+1][j-1], mat[i+2][j-2])) {
                vitoria = true;
            }
        }
    }

    if(vitoria) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
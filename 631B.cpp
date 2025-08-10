#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

void pinta_coluna(vector<vector<int>> &vec, int col, int cor) {
    for(int i = 0 ; i < vec.size(); i++) {
        vec[i][col] = cor;
    }
}

void pinta_linha(vector<vector<int>> &vec, int linha, int cor) {
    for(int j = 0 ; j < vec[linha].size(); j++) {
        vec[linha][j] = cor;
    }
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> mat(n, vector<int>(m, 0));
    vector<vector<int>> op(k, vector<int>(3));

    fo(i, k) {
        fo(j, 3) cin >> op[i][j];
    }

    fo(i, k) {
        if(op[i][0] == 1) {
            pinta_linha(mat, op[i][1] - 1, op[i][2]);
        } else if(op[i][0] == 2) {
            pinta_coluna(mat, op[i][1] - 1, op[i][2]);
        }
    }

    fo(i, n) {
        fo(j, m) cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}

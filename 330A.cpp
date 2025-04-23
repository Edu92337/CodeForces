#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> posicoes(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char v;
            cin >> v;
            if (v == 'S') {
                posicoes[i][j] = -1; 
            } else {
                posicoes[i][j] = 1;  
            }
        }
    }
    
    int cake = 0;
    for (int i = 0; i < n; i++) {
        if(find(posicoes[i].begin(),posicoes[i].end(),-1) != posicoes[i].end()){
            continue;
        }
        int aux = 0;
        for (int j = 0; j < m; j++) {
            aux += posicoes[i][j];
            posicoes[i][j] -= 1;
        }
        cake += aux;
    
        }
        for (int j = 0; j < m; j++) {
            bool temS = false;
            
            for (int i = 0; i < n; i++) {
                if (posicoes[i][j] == -1) {
                    temS = true;  
                    break;
                }
            }
            if (temS) continue;  
            
            int aux = 0;
            
            for (int i = 0; i < n; i++) {
                aux += posicoes[i][j];
                posicoes[i][j] -= 1;  
            }
            cake += aux; 
        }
    cout << cake << endl;
    

    return 0;
}
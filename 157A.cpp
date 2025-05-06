#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

vector<int> soma_linha(vector<vector<int> >matrix,int n){
    vector<int>matriz;
    for(int i = 0;i<n;i++){
        int soma = 0;
        for(int j = 0;j<n;j++) soma += matrix[i][j];
        matriz.pb(soma);
    }
    return matriz;
}
vector<int>soma_coluna(vector<vector<int> >matrix,int n){
    vector<int>somas;
    for(int j = 0;j<n;j++){
        int soma = 0;
        for(int i = 0;i<n;i++) soma += matrix[i][j]; 
        somas.pb(soma);
    }
    return somas;
}
int main() {
    int n;
    cin >> n;
    vector<vector<int> >mat(n,vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++) cin >> mat[i][j];
    }
    vector<int>somas_colunas,somas_linhas;
    somas_linhas = soma_linha(mat,n);
    somas_colunas = soma_coluna(mat,n);
    int vitorias = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            
            if(somas_colunas[j]>somas_linhas[i]) vitorias++;
        }
    }
    cout << vitorias;
 

    return 0;
}
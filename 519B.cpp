#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    map<int,int>erros_iniciais,erros_parciais,erros_finais;
    fo(i,n){
        int v;
        cin >> v;
        erros_iniciais[v] ++;
    }
    
    fo(i,n-1){
        int v;
        cin >> v;
        erros_parciais[v]++;
    }
    fo(i,n-2){
        int v;
        cin >> v;
        erros_finais[v] ++;
    }
    vector<int>corrigidos;
    for(auto par: erros_iniciais){
        if(erros_parciais[par.first] != erros_iniciais[par.first]){
            for(int i = 0;i<(erros_iniciais[par.first]-erros_parciais[par.first]);i++){
                corrigidos.push_back(par.first);
            }
        }
    }
    for(auto par: erros_parciais){
        if(erros_finais[par.first] != erros_parciais[par.first]){
            for(int i = 0;i<(erros_parciais[par.first]-erros_finais[par.first]);i++){
                corrigidos.push_back(par.first);
            }
        }
    }
    for(int i = 0;i<corrigidos.size();i++) cout << corrigidos[i]<<endl;

    return 0;
}
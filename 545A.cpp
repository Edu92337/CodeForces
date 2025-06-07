#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>>carros(n,vector<int>(n,0));
    set<int>batidos;
    fo(i,n){
        fo(j,n) cin >> carros[i][j];
    }
    fo(i,n){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            else{
                if(carros[i][j] == 1) batidos.insert(i+1);
                else if(carros[i][j] == 2) batidos.insert(j+1);
                else if(carros[i][j]==3){
                    batidos.insert(i+1);
                    batidos.insert(j+1);
                }
            }
        }
    }cout<<n-batidos.size()<<endl;
    fo(i,n){
        if(batidos.count(i+1) == 0) cout<<i+1<<" ";
    }
    return 0;
}
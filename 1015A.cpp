#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>>intervalos;
    while(n--){
        int l,r;
        cin >> l >> r;
        intervalos.push_back(make_pair(l,r));
    }
    int qnt = 0;
    vector<int>pontos;
    for(int i = 1;i<=m;i++){
        bool tag = true;
        for(auto ponto : intervalos){
            if((ponto.first<=i) && ponto.second >=i){
                tag = false;
                break;
            }
        }
        if(tag){
            qnt++;
            pontos.push_back(i);
        }
    }cout <<qnt<<endl;
    for(int ponto : pontos){
        cout <<ponto <<" ";
    }cout <<endl;
    return 0;
}
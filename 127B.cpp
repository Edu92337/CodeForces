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
    map<int,int> tamanhos;
    fo(i,n){
        int c;
        cin >> c;
        tamanhos[c]++;
    }
    int pares = 0;
    for(auto& par : tamanhos){
        pares += par.second/2;
    
    }
    cout << pares/2;

    return 0;
}
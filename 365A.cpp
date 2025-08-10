#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n,k;
    cin >> n >> k;
    int contador =0;
    fo(j,n){
    set<char>conjunto;
    fo(i,k+1) conjunto.insert('0'+i);
    string num;
    cin >> num;
    for(int i = 0;i<num.size();i++){
        if(conjunto.count(num[i])) conjunto.erase(num[i]);
    }
    if(conjunto.size()==0) contador++;

    }cout << contador;


    return 0;
}
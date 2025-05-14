#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    string balanca;
    cin >> balanca;
    int n = balanca.size();
    vector<pair<int,int> > esquerda,direita;
    bool pivot = false;
    int pivot_loc ;
    for(int i = 0;i<n;i++){
        if (balanca[i] == '^'){
            pivot = true;
            pivot_loc = i;
        }
         if(pivot == false){
            if(balanca[i]!='=' && balanca[i]!='^') esquerda.push_back(mp(balanca[i]-'0',i));
        }
         if(pivot == true){
            if(balanca[i]!='=' && balanca[i]!='^') direita.push_back(mp(balanca[i]-'0',i));
        }
    }
    long long torqueh = 0;
    long long torqueah = 0;

    fo(i, esquerda.size()) {
        torqueh += 1LL * esquerda[i].first * (pivot_loc - esquerda[i].second);
    }
    fo(i, direita.size()) {
        torqueah += 1LL * direita[i].first * (direita[i].second - pivot_loc);
    }
    if(torqueh > torqueah) cout << "left";
    else if (torqueh < torqueah) cout << "right";
    else cout << "balance";

    return 0;
}
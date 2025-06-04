#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    map<string,int>alternativas;
    vector<char> boas;
    
    fo(i,4){
        string palavra;
        cin >> palavra;
        alternativas[palavra] = palavra.size()-2;
        
    }
    for(auto& par1: alternativas){
        bool maior = true;
        bool menor = true;
        for(auto& par2:alternativas){
            if(par2.first!=par1.first){
                if (par1.second * 2 > par2.second) menor = false;
                if (par1.second < 2 * par2.second) maior = false;

            }
        }
        if(menor||maior) boas.push_back(par1.first[0]);

    }
    if(boas.size()==1) cout << boas[0];
    else cout << "C";

    
    return 0;
}
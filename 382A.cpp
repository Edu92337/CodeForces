#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define endl '\n'

int main() {
    string pesos;
    cin >> pesos;
    string esquerda,direita;
    bool meio = false;
    for(char s : pesos){
        if(s == '|') meio = true;
        else if(meio == false) esquerda.pb(s);
        else direita.pb(s);
    }
    string restantes;
    cin >> restantes;
    while (restantes.size()!=0){
        if(esquerda.size() < direita.size()){
            esquerda.push_back(restantes[restantes.size()-1]);
            restantes.pop_back();
        }else{
            direita.push_back(restantes[restantes.size()-1]);
            restantes.pop_back();
        }
    }
    (esquerda.size() == direita.size()) ? cout << esquerda +"|"+direita : cout << "Impossible";
    
    return 0;
}
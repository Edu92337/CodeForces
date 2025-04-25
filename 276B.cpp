#include <bits/stdc++.h>
using namespace std;
int main(){
    string palindromo;
    map<char,int>letras;
    cin >> palindromo;
    for(int i = 0;i < palindromo.size();i++){
        letras[palindromo[i]]++;
    }
    int jogador = 0;
    for (auto &par : letras){
        if(par.second % 2 != 0){
            jogador ++;
        }
    }
    if(jogador % 2 != 0){
        cout << "First";
    }else{
        if(jogador == 0) cout << "First";
        else cout << "Second";
    } 

    return 0;
}
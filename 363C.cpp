#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    string s;cin >> s;
    deque<char>pilha;
    int contador_anteiror = 1;
    int contador_atual=1;
    char anterior;
    for(int i = 0;i<s.size();i++){
        if(pilha.size()==0){
            pilha.push_back(s[i]);
            anterior= s[i];
        }else{
            if(s[i]==anterior){
                if(contador_anteiror!=2 &&contador_atual<2){
                    pilha.push_back(s[i]);
                    contador_atual++;
                }
            }else{
                contador_anteiror = contador_atual;
                contador_atual=1;
                pilha.push_back(s[i]);
            }
        }
        anterior=s[i];
    }
    while(!pilha.empty()){
        char atual = pilha.front();
        cout<<atual;
        pilha.pop_front();
    }cout <<endl;
    return 0;
}
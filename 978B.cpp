#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

bool tres_x(const vector<char>& vec, int i) {
    if (i + 2 >= vec.size()) return false; 
    return vec[i] == 'x' && vec[i+1] == 'x' && vec[i+2] == 'x';
}
int main() {
    int n;
    cin >> n;
    int contador = 0;
    vector<char> mensagem(n);
    fo(i,n) cin >> mensagem[i];
    int l = mensagem.size();
    for(int i = 0;i<=l-3;i++){
        bool verificacao = tres_x(mensagem,i);
        while(verificacao){
            contador++;
            mensagem.erase(mensagem.begin()+i);
            l = mensagem.size();
            verificacao = tres_x(mensagem,i);
        }
        
        l = mensagem.size();
        
    }
    cout << contador;
    return 0;
}
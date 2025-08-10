#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    cin.ignore();
    fo(i,n){
        string mensagem;
        getline(cin, mensagem);

        int n = mensagem.size();
        bool miao = false;
        bool lala = false;
        if(n >= 5 && mensagem.substr(0,5)=="miao.") miao = true;
        if(n >= 5 && mensagem.substr(n-5) == "lala.") lala = true;
        if(miao == true && lala == false) cout <<"Rainbow's"<<endl;
        else if(miao == false && lala == true) cout << "Freda's"<<endl;
       else cout <<"OMG>.< I don't know!"<<endl;
    
}
    return 0;
}
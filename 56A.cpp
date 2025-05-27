#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define endl '\n'

bool isNumber(const string& s) {
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return !s.empty();
}

int main() {
    int n;
    cin >> n;
    int verificados = 0;
    vector<string>bebidas = {"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};

    fo(i,n){
        string check;
        cin >> check;
        if (find(all(bebidas),check) != bebidas.end()){
            verificados++;
        }else if(isNumber(check)==true && stoi(check) <18){
            verificados++;
        }
    }cout << verificados;
    return 0;
}
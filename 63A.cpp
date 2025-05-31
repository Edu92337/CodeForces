#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define endl '\n'

int main() {
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> valores = {
        {"rat", 3},
        {"woman", 2},
        {"child", 2},
        {"captain", 0},
        {"man",1}
    };
    vector<pair<string,int>>ordem;
    for(int i = 0;i<n;i++){
        string entrada;
        getline(cin,entrada);
        stringstream ss(entrada);
        string nome,posicao;
        ss >> nome >> posicao;
        
        ordem.push_back(mp(nome,valores[posicao]));
    }
    
    stable_sort(ordem.begin(), ordem.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second; 
});
    fo(i,n) cout << ordem[i].first<<endl;

    return 0;
}
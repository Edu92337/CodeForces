#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main() {
    int n,s;
    cin >> n >> s;
    vector<pair<int,int> >passageiros(n);
    for(int i = 0;i < n;i++){
        cin >> passageiros[i].first >> passageiros[i].second;
    }
    int tempo = 0;
    int andar_atual = s;
    sort(all(passageiros), greater<>());
    for(int i = 0;i<n;i++){
        tempo += andar_atual - passageiros[i].first ;
        tempo = max(tempo,passageiros[i].second);
        andar_atual = passageiros[i].first;
    }
    tempo += andar_atual;
    cout << tempo;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    long long n, qnt = 0;
    cin >> n;
    vector<pair<long long,long long>> negativos, positivos;

    for (int i = 0; i < n; i++) {
        long long arvore, macas;
        cin >> arvore >> macas;
        if (arvore > 0) positivos.emplace_back(arvore, macas);
        else negativos.emplace_back(arvore, macas);
    }

    sort(all(positivos));
    sort(all(negativos), [](pair<long long, long long> a, pair<long long, long long> b){
        return abs(a.first) < abs(b.first);
    });

    if (positivos.size() == negativos.size()) {
        for (auto& p : positivos) qnt += p.second;
        for (auto& p : negativos) qnt += p.second;
        
    } else if (positivos.size() > negativos.size()) {
        for (int i = 0; i < negativos.size(); i++) qnt += negativos[i].second;
        for (int i = 0; i <= negativos.size(); i++) qnt += positivos[i].second;
    } else {
        for (int i = 0; i < positivos.size(); i++) qnt += positivos[i].second;
        for (int i = 0; i <= positivos.size(); i++) qnt += negativos[i].second;
    }

    cout << qnt << "\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> horario(n);
    fo(i, n) cin >> horario[i].first >> horario[i].second;
    sort(all(horario));

    long long t = 1;          
    long long contador = 0;    
    for (auto par : horario) {
        long long qnt = (par.first-t)/x;
        t += qnt*x;
        contador += (par.first - t);
        t = par.first;
        contador += ( par.second - par.first +1);
        t = par.second+1;
    }
    cout << contador;
    return 0;
}
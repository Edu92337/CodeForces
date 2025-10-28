#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n,h,k;cin >> n >> h >> k;
    queue<int>fila;
    fo(i,n){
        int x;cin >> x;
        fila.push(x);
    }
    int hin = fila.front();
    fila.pop();
    long long  t = 0;
    while (!fila.empty()) {
        int e = hin + fila.front() - h;
        if (e > 0) {
            int tempo = (e + k - 1) / k;
            t += tempo;
            hin -= tempo * k;
            if (hin < 0) hin = 0;
        } else {
            hin += fila.front();
            fila.pop();
        }
    }
    t += (hin + k - 1) / k;

    cout << t<<endl;
    return 0;
}
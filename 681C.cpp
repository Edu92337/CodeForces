#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> heap;
    vector<pair<string,int>> operacoes;

    fo(i,n){
        string s; cin >> s;
        int x = 0;
        if (s != "removeMin") cin >> x;

        if (s == "insert") {
            heap.push(x);
            operacoes.pb(mp("insert", x));
        } 
        else if (s == "removeMin") {
            if (heap.empty()) {
                operacoes.pb(mp("insert", 0));
                heap.push(0);
            }
            operacoes.pb(mp("removeMin", 0));
            heap.pop();
        } 
        else if (s == "getMin") {
            while (!heap.empty() && heap.top() < x) {
                heap.pop();
                operacoes.pb(mp("removeMin", 0));
            }
            if (heap.empty() || heap.top() > x) {
                heap.push(x);
                operacoes.pb(mp("insert", x));
            }
            operacoes.pb(mp("getMin", x));
        }
    }

    cout << operacoes.size() << endl;
    for (auto [op, x] : operacoes) {
        if (op == "removeMin") cout << op << endl;
        else cout << op << " " << x << endl;
    }

    return 0;
}

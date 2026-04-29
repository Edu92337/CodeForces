#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

vector<int> divisores;

void div(int n){
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            divisores.push_back(i);
            if(i != n / i)
                divisores.push_back(n / i);
        }
    }
}

int main() {_
    int n;cin >> n;
    div(n);
    bool achou = false;
    for(int d : divisores){
        string num = to_string(d);
        set<char>vistos;
        set<char>p1 = {'4','7'};
        set<char>p2 = {'4'};
        set<char>p3 = {'7'};
        for(char c: num)vistos.insert(c);
        if(vistos == p1 || vistos == p2 || vistos == p3){
            achou = true;
            cout <<"YES"<<endl;
            return 0;
        }
    }
    if(!achou)cout <<"NO"<<endl;
    return 0;
}
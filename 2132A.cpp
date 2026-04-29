#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

void solve(){
    int n;cin >> n;
    deque<char>nw;
    for(int i = 0;i<n;i++){
        char c;cin >> c;
        nw.push_back(c);
    }
    int m;cin >> m;
    string b;cin >> b;
    string ordem;cin >> ordem;
    for(int i = 0;i<m;i++){
        if(ordem[i]=='V'){
            nw.push_front(b[i]);
        }else nw.push_back(b[i]);
    }
    for(char c: nw)cout <<c;
    cout <<endl;
}

int main() {_
    int t;cin >> t;
    while(t--) solve(); 
    return 0;
}
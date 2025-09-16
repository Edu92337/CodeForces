#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        deque<char>dq;
        for(char c:s){
            if(c == 'b' && !dq.empty()){
                dq.pop_back();
            }else if(c == 'B '&& !dq.empty()){
                dq.pop_front();
            }else dq.push_back(c);
        }
        for(char c:dq) cout <<c;
        cout <<endl;
    }
    return 0;
}
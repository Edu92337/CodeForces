#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main() {
    int n;
    vector<char>pilha;
    cin >> n;
    string num;
    cin >> num;
    for(char c:num){
        if (!pilha.empty() && ((pilha.back() == '1' && c == '0') || (pilha.back() == '0' && c == '1'))) {
            pilha.pop_back();
        } else {
            pilha.pb(c);
        }
        
        
       
    }cout << pilha.size();
    return 0;
}
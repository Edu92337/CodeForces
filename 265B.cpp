#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int n;
    cin>> n;
    vector<int> alturas(n);
    fo(i,n) cin >> alturas[i];
    int moves = alturas[0];
    fo(i,n-1){
        if(alturas[i+1] <=alturas[i]){
            moves += alturas[i] - alturas[i+1] + 1;
        }else {
            moves += 1 + alturas[i+1] - alturas[i]; 
        }
    }cout << moves + n;
    return 0;
}
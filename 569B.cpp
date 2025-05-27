#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define endl '\n'
 
int main() {
    int n;
    cin >> n;
    vector<long long>ideal(n);
    fo(i,n) cin >> ideal[i];
    long long it_parcial = 0;
    for(int i = 1;i<n;i++){
        it_parcial+=abs(ideal[i] - ideal[i-1]);
 
    }
   cout << it_parcial+abs(ideal[0]);
    return 0;
}
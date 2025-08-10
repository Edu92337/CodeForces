#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    int maiorx = INT_MIN,maiory = INT_MIN;
    int menorx = INT_MAX,menory = INT_MAX;
    fo(i,n){
        int x,y;
        cin >> x >> y;
        maiorx = max(x,maiorx);
        menorx = min(x,menorx);
        maiory = max(y,maiory);
        menory = min(y,menory);
    }
    long long lado = max(maiorx-menorx,maiory-menory);
    cout <<lado*lado<<endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n ;
    cin >> n;
    int passo = n-1;
    int numero = n;
    int dir = -1;
    int i = 1;
    cout << '1'<<" ";
    while(i<n){
        cout << numero<<" ";
        passo--;
        numero += dir*passo;
        dir *=-1;
        i++;
    }
    return 0;
}
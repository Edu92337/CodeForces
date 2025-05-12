#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int a,b;
    cin >> a >> b;
    int primeiro= 0,empate=0,segundo=0;
    for(int i = 1;i<=6;i++){
        if (abs(a-i) < abs(b-i)) primeiro++;
        else if (abs(a-i) > abs(b-i)) segundo++;
        else empate++;
    }cout << primeiro <<" " << empate << " " << segundo;

    return 0;
}

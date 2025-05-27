#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define endl '\n'

int main() {                                                                  
    int x,y,a,b;
    cin >> x >> y >> a >> b;
    int r = lcm(x,y);
    cout << b / r - (a - 1) / r ;
    return 0;
}
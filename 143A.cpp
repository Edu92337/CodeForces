#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main() {
    int x,y,z,w,t,s;
    int a,b,c,d;
    cin >> z >> w;
    cin >> x >> y;
    cin >> t >> s;
    b = (z-x+s)/2;
    c = (s-z+x)/2;
    d = (y-z+t)/2;
    a = x-c;
    if (
        z - x + s != y + z - t ||
        s - z + x != w + x - t ||
        y - z + t != w - x + t ||
        z - x + s == s - z + x ||
        s - z + x == y - z + t ||
        y - z + t == z - x + s ||
        z - x + s < 2 || z - x + s > 18 ||
        s - z + x < 2 || s - z + x > 18 ||
        y - z + t < 2 || y - z + t > 18 ||
        a < 1 || a > 9 ||
        a == b || a == c || a == d
    ) {
        cout << -1;
    }
    else{
        
        cout << a <<" " << b<<endl;
        cout<< c <<" "<<d<<endl;
    }


    return 0;
}
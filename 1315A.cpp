#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    fo(i,n){
        int a,b,x,y;
        cin >>a>>b>>x>>y;
        int a1,a2,a3,a4;
        a1 = (a)*(y);
        a2 = (a)*(b-y-1);
        a3 = (x)*(b);
        a4 = (a-x-1)*(b);
        cout << max({a1,a2,a3,a4})<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'
const long double PI = 3.141592653589793238462643383279L;

int main() {
    int n;
    cin >> n;
    vector<int>radios(n);
    fo(i,n) cin >> radios[i];
    sort(all(radios));
    long double area = 0;
    for(int i = 1; i <= n;i++){
        if (i % 2 != 0){
            area += radios[i-1]*radios[i-1];
        }else area -= radios[i-1]*radios[i-1];
    }cout << fixed << setprecision(10) << abs(area*PI);
    return 0;
}
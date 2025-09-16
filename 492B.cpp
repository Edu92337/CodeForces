#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


bool check(vector<int>& vec, double x, int l) {
    if (vec[0] - x > 0) return false;

    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] - x > vec[i-1] + x) return false;
    }
    if (vec.back() + x < l) return false;

    return true;
}


double busca(vector<int>& v, int l) {
    double low = 0, high = l;
    for (int it = 0; it < 100; it++) { 
        double mid = (low + high) / 2.0;
        if (check(v, mid, l)) {
            high = mid;
        } else {
            low = mid;
        }
    }
    return high;
}




int main() {_
    int n,l;cin >> n >> l;
    vector<int>lampadas(n);
    fo(i,n) cin >> lampadas[i];
    sort(all(lampadas));
    cout <<fixed<<setprecision(10)<<busca(lampadas,l)<<endl;
    return 0;
}
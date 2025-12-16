#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

double f(double x,double c){
    return x*x + sqrt(x)-c;
}

float busca(double c){
    double l = 0,r = sqrt(c);
    double mid;
    while(abs(l-r)>= 1e-6){
        mid = l + (r-l)/2;
        if(f(l,c)*f(mid,c)<0)r = mid;
        else l = mid;
    }
    return r;
}


int main() {_
    double c;cin >> c;
    cout << fixed << setprecision(6) << busca(c) << endl;
    return 0;
}
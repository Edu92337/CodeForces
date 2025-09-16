#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

bool check(const vector<double>& cordas, int k, double t) {
    int total = 0;
    for (double c : cordas) {
        total += (int)(c / t);  
    }
    return total >= k;
}

double busca(vector<double>cordas,int k){
    double l=0.0,r = *max_element(all(cordas))+1;
    double mid;
    double eps = 1e-7;
    while(r-l>eps){
        mid = l+(r-l)/2.0;
        if(check(cordas,k,mid)){
            l = mid;
        }
        else r = mid ;
    }
    return l;
}

int main() {_
    int n,k;
    cin >> n >> k;
    vector<double>cordas(n);
    fo(i,n) cin >> cordas[i];
    cout <<fixed<<setprecision(6)<<busca(cordas,k)<<endl;
    return 0;
}
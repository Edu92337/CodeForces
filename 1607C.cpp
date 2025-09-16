#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


void solve(){
    int n;
    cin >> n;
    vector<int>vec(n);
    fo(i,n) cin >> vec[i];
    sort(all(vec));
    int menor = *max_element(all(vec));
    int i =0;
    while(vec.size()>2 && i<vec.size()){
        for(int j = i+1;j<n;j++){
            vec[j]-= vec[j];
            menor = min(menor,vec[j]);
        }
        
        i++;
    }
    cout << menor<<endl;
}

int main() {_
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
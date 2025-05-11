#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int n ;
    cin >> n;
    vector<int> nums(n),keys;
    fo(i,n) cin >> nums[i];
    vector<int> escada;
    int maior = *max_element(all(nums));  
    escada.pb(maior);
    map<int,int> counter;
    for(int x : nums){
        if (x != maior){
            counter[x]++;
        }
    }
    for(auto& par : counter){
        keys.pb(par.first);
    }
    sort(all(keys),greater<int>());
    for( auto key : keys){
        if(counter[key] > 1) {
            escada.insert(escada.begin(),key);
            escada.pb(key);
        }else if (counter[key] == 1) escada.pb(key);
    }

    cout << escada.size() << endl;
    fo(i,escada.size()) cout << escada[i] << " ";
    return 0;
}
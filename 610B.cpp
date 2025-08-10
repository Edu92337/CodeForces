#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    vector<int>cores(n,0);
    fo(i,n) cin >> cores[i];
    int menor = *min_element(all(cores));
    int menor_pos = -1;
    auto it = find(cores.rbegin(), cores.rend(), menor);
    int index = n  - distance(cores.rbegin(), it);
    auto it2 = find(cores.begin(),cores.end(),menor);
    menor_pos = distance(cores.begin(), it2);
    
    cout << index<<" "<<menor_pos<<endl;
    cout<<n*menor+(index-menor_pos-1);

    return 0;
}
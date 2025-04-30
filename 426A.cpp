#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin >> n >> s;
    vector<int>mugs(n);
    for(int i = 0;i<n;i++)cin >> mugs[i];
    sort(mugs.begin(),mugs.end());
    int soma = accumulate(mugs.begin(),mugs.begin()+n-1,0);
    if (soma <= s) cout << "YES";
    else cout << "NO";
    return 0;
}
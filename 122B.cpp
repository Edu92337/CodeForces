#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    string num;
    map<string,int> freq;
    cin >> num;
    int l = 0;
    int r;
    int n = num.size();
    
    while (l<n){
        r = 0;
        string parcial = "";
        while(l + r < n && (num[l + r] == '4' || num[l + r] == '7')){
            parcial += num[l+r];
            if(!parcial.empty()) freq[parcial]++;
            r++;
        }
        l++;
    }
    string maior(51,'~');
    int freq_maior = -1;
    
    for (auto& par : freq) {
        if (par.second > freq_maior || (par.second == freq_maior && par.first < maior)) {
            maior = par.first;
            freq_maior = par.second;
        }
}
    freq_maior != -1 ? cout << maior : cout << -1;
    return 0;
}
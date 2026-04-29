#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >> n;
    map<int,int>freq;
    fo(i,n){
        int x;cin >> x;
        freq[x]++;
    }
    vector<int>ordem;
    int qnt = 0;
    
    while(true){
        bool all_zero = true;
        for(auto [x,f]:freq){
            if(f>0){
                all_zero = false;
                ordem.push_back(x);
                freq[x]--;
            }
        }
        if(all_zero)break;
    }


    int anterior = ordem[0];
    for(int i = 1;i<n;i++){
        if(ordem[i]>anterior)qnt++;
        anterior = ordem[i];
    }cout <<qnt<<endl;
    
    return 0;
}
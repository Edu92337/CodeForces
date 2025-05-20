#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> dish(n);
    fo(i,n) cin >> dish[i];
    int bowls = m,plates = k;
    int clean = 0;
    for(int i: dish){
        if(i == 1){
            if(bowls == 0) {
                clean++;
            }
            else bowls--;

        }else{
            if(plates == 0 && bowls == 0) clean++;
            else {
                if(plates !=0) plates--;
                else bowls--;
                
            }
        }
    }
    cout << clean;
    return 0;
}
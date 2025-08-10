#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    map<int,int>troco;
    bool tag = true;
    fo(i,n){
        int nota ;
        cin >> nota;
        if(nota == 25) troco[nota]++;
        else if(nota == 50){
            if(troco[25]==0){
                tag = false;
                
            }
            else{
                troco[nota]++;
                troco[25]--;
            }
        }
        else if(nota == 100){
            if(troco[25]>=1 && troco[50]>=1){
                troco[nota]++;
                troco[25]--;
                troco[50]--;
            }
            else if(troco[25]>=3) {
                troco[nota]++;
                troco[25]-=3;
            }
            else tag = false;
            
        }
        
    }
    tag == true ? cout <<"YES" : cout << "NO";

    return 0;
}
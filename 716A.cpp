#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin >> n >> c;
    vector<int>tempos(n);
    for(int i = 0; i< n ;i++) cin >> tempos[i];
    int t = tempos[0];
    int palavras = 1;
    for(int i = 1;i<n;i++){
        if((tempos[i]-t)<= c){
            palavras++;
            
        }else palavras = 1 ;
        t = tempos[i];
    }
    cout << palavras;

    return 0;
}
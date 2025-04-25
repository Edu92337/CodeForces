#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,valor = 10,maneiras = 0 ;
    cin >> n;
    vector<int> cartas = {1,2,3,4,5,6,7,8,9,10,10,10,10,11};
    for (int i = 0; i <= 13;i++){
        if(valor + cartas[i] == n){
            maneiras += 4;
        }           
    }
    if (n - valor == 10){
        maneiras --;
    }
    cout << maneiras << endl;

    return 0;
}
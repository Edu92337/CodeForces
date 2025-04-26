#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string ham;
    cin >> ham;
    int up=0,down=0;
    for (int i = 0; i < n; i++) {
        if (ham[i] == 'X')
            up++;
        else
            down++;
    }
    int tempo;
    up > n/2 ? tempo = up - n/2 : tempo = down - n/2;

    if (up > n/2){
        int moves = tempo;
        for(int i = 0; i < n;i++){
            if(moves != 0){
                if(ham[i] == 'X'){
                    ham[i] = 'x';
                    moves--;
                }
            }
        }
    }else if (down > n/2){
        int moves = tempo;
        for(int i = 0; i < n;i++){
            if(moves != 0){
                if(ham[i] == 'x'){
                    ham[i] = 'X';
                    moves--;
                }
                
            }
        }
    }
    cout << tempo << endl;
    cout << ham;

    return 0;
}
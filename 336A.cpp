#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    int xc,ya;
    if (x > 0 && y > 0){
        xc = x+y;
        ya = x+y;
    }else if (x < 0 && y > 0){
        xc = x - y;
        ya = y - x;
    }else if(x < 0 && y < 0){
        xc = x + y;
        ya = x + y;
    }else if (x > 0 && y< 0){
        xc = x - y;
        ya = y - x;
    }
    if (xc < 0) {
        cout << xc << " 0 0 " << ya;

    }else {
        cout << "0 " << ya << " " << xc << " 0";
    }
    




    return 0;
}
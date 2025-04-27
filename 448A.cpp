#include <bits/stdc++.h>
using namespace std;

int main(){
    int cups = 0,medals = 0,prat;
    for(int i = 0;i<3;i++){
        int v ;
        cin >> v;
        cups += v;
    }
    for(int i = 0;i<3;i++){
        int v ;
        cin >> v;
        medals += v;
    }
    cin >> prat;
    if(cups >5){
        if(cups%5!= 0)prat -= (cups/5) + 1;
        else prat -= cups/5;
    }else{
        if(cups!= 0) prat -= 1;
    }
    if(medals >10){
        if(medals%10 != 0)prat -= (medals/10) + 1 ;
        else prat -= medals/10;
    }else{
        if(medals != 0) prat -= 1;
    }
    prat >=0?cout <<"YES" : cout << "NO";



    return 0;
}
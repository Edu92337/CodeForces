#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    pair<int,int>pos;
    cin >> pos.first >> pos.second;
    double d = 0;
    for(int i = 0; i < n-1;i++){
        pair<int,int>ponto;
        cin>>ponto.first >> ponto.second;
        double x;
        x = sqrt(pow(pos.first-ponto.first,2) + pow(pos.second-ponto.second,2));
        d += x;
        pos.first = ponto.first;
        pos.second = ponto.second;
    }
    cout <<fixed << setprecision(9)<< k*d/50;
    return 0;
}
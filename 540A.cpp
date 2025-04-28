#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    string atuals,originals;
    int moves = 0;
    cin >> atuals;
    cin >> originals;
    vector<int>atual(n),original(n);
    for(int i = 0;i<n;i++){
        atual[i] = atuals[i]-'0';
    }
    for(int i = 0;i<n;i++){
        original[i] = originals[i]-'0';
    }
    for(int i = 0; i< n;i++){
        if(atual[i]<=5 && original[i]<=5){
            moves += abs(atual[i]-original[i]);
        }else if(atual[i]>5 && original[i]> 5){
            moves += abs(atual[i]-original[i]);
        }else{
            if(abs(atual[i]-original[i])>5){
                if(atual[i]<original[i]) moves += abs(abs(10+atual[i]-original[i]));
                else moves += abs(abs(atual[i]-original[i]-10));
            }else{
                moves += abs(atual[i]-original[i]);
            }
            
        }
    }
    cout << moves;
    return 0;
}
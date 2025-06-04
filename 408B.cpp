#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    string vasya;
    string girlanda;
    int area = 0;
    cin >> vasya;
    cin >> girlanda;
    map<char,int>qnt_vasya,qnt_guirlanda;
    for(char c : vasya){
        qnt_vasya[c]++;
    }
    for(char c : girlanda){
        qnt_guirlanda[c]++;
    }
    for(auto& par : qnt_guirlanda){
        if(qnt_vasya.count(par.first)){
            if(qnt_vasya[par.first] >= qnt_guirlanda[par.first]){
                area +=  qnt_guirlanda[par.first];
            }else{
                area += qnt_vasya[par.first];
            }
    }else{
        area = 0;
        break;
    }

    }
    area == 0 ? cout << -1 : cout << area;
    return 0;
}
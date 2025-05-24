#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define endl '\n'

bool lucky_num(string x){
    for(int i = 0;i<x.size();i++){
        if (x[i] != '7' && x[i] !='4') return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    string ticket;
    cin >> ticket;
    int primeira_parte = 0;
    int segunda_parte = 0;
    for(int i = 0;i<n;i++){
        if(i<n/2) primeira_parte+=ticket[i]-'0';
        else segunda_parte += ticket[i]-'0';
    }
    
    bool tag = lucky_num(ticket) ;
    tag == true && primeira_parte == segunda_parte ? cout << "YES" : cout << "NO";
    return 0;
}
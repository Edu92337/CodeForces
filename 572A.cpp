#include <bits/stdc++.h>
using namespace std;
int main(){
    int na,nb,k,m;
    cin >> na >> nb;
    cin >> k >> m;
    vector<int>a(na);
    vector<int>b(nb);
    for(int i = 0; i<na;i++)cin>>a[i];
    for(int i = 0; i<nb;i++)cin>>b[i];
    (a[k-1] < b[nb-m]) ? cout << "YES" : cout << "NO";
 
    return 0;
}
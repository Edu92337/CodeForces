#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n;
    cin >> n;
    vector<pair<int,int>>ordens(n);
    fo(i,n) cin >> ordens[i].second >> ordens[i].first;
    sort(all(ordens),[](pair<int,int> a,pair<int,int> b){
        return a.first < b.first;
    });
    int t =ordens[0].first;
    int qnt = 1;
    for(int i =1;i<n;i++){
        if(ordens[i].second-t >0){
            qnt++;
            t = ordens[i].first;
        }
    }cout << qnt << endl;
    return 0;
}
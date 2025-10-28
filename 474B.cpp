#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


int solve( vector<pair<int,int>>&intervalos){
    int w;cin >> w;
    int l = 0,r = intervalos.size();
    int mid;
    while(l<r){
        mid = l + (r-l)/2;
        if(w >= intervalos[mid].first && w <=intervalos[mid].second)return mid+1;
        else if(w < intervalos[mid].first)r=mid;
        else l=mid+1;
    }
    return -1;
}


int main() {_
    int n;cin >> n;
    vector<pair<int,int>>intervalos(n);
    intervalos[0].first = 1;
    int y;cin >> y;
    intervalos[0].second = y;
    for(int i = 1;i<n;i++){
        int x;cin >> x;
        intervalos[i].first = intervalos[i-1].second+1;
        intervalos[i].second = intervalos[i-1].second+x;
    }
    int m;cin >> m;
    while(m--){
        cout << solve(intervalos)<<endl;
    }
    

    return 0;
}
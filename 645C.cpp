#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

/*
l=1,r = 5;max_dist = 3
01010 ok r = 3 l = 1  dist = 2




*/



bool solve(int n,int k,string &rooms,long long max_dist){
    for(int i = 0;i<n-max_dist;i++){
        if(rooms[i]=='0'&&rooms[i+max_dist]=='0')return true;
    }
    return false;
}



long long busca(int n,int k,string &rooms){
    long long l = 1,r = n-1;
    long long mid;
    while(l<=r){
        mid = l + (r-l)/2;
        if(solve(n,k,rooms,mid))r = mid-1;
        else l = mid+1;
    }return l;
}
int main() {_
    int n,k;cin >> n >> k;
    string rooms;cin >> rooms;
    cout<<busca(n,k,rooms)<<endl;

    return 0;
}
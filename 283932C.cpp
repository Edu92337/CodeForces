#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

/*
l = 1,r=4
mid = 2  ->2/1+2/1 = 4 ok
l =1 ,r = 2
mid = 2

*/

bool solve(int n,int x,int y,int tempo){
    tempo -= min(x,y);
    return 1 + tempo/x + tempo/y>=n;
}

long long busca(int n,int x,int y){
    long long l = min(x,y),r = max(x,y)*n;
    long long mid;
    while(l<=r){
        mid = l+(r-l)/2;
        if(solve(n,x,y,mid))r=mid-1;
        else l = mid + 1;
    }
    return l;
}


int main() {_
    int n,x,y;cin >> n >> x >> y;
    cout<<busca(n,x,y)<<endl;
    return 0;
}
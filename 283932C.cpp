#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

bool check(int n, int x,int y,int qnt){
    
}


int busca(int n,int x,int y){
    int l = 0,r = n*max(x,y);
    int mid;
    int ans=0;
    while(l<r){
        mid = l+(r-l)/2;
        if(check(n,x,y,mid)){
            r = mid;

        } 
        else l = mid + 1;
    }
}


int main() {_
    int n,x,y;
    cin >> n >> x >> y;
    cout <<busca(n,x,y)<<endl;
    return 0;
}
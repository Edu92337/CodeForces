#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int x(int i){
    return (1+i)*i/2;
}

int main() {_
    int n;cin >> n;
    if(n==1)cout <<1<<endl;
    else{
        n--;
        int h_max = 2;
        while(n>0){
            n -= x(h_max);
            if(n<0)break;
            else h_max++;


        }cout <<h_max-1<<endl;
    }
    return 0;
}
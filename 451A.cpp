#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int n,m;
    cin >> n >> m;
    int counter = 1;
    while (n != 0 or m != 0)
    {
        if(n == 1 && m == 1) break;
        n--;
        m --;
        counter++;
        if(n==0 || m ==0) break;
    }
    if(n == 0 || m == 0){
        if(counter % 2 == 1)cout << "Malvika";
        else cout << "Akshat";
    }
    else {
        if(counter % 2 == 1)cout << "Akshat";
        else cout << "Malvika";
    }
    
    return 0;
}
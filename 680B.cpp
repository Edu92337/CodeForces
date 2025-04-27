#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    cin >> n >> a;
    vector<int>crim(n);
    for(int i = 0;i<n;i++) cin>> crim[i];
    int p=1;
    int cap = 0;
    if(crim[a-1] == 1)cap++;
    while (true){
        if(a+p-1 > n-1 && a-p-1 < 0)break;
        else if(a+p-1 > n-1 && a-p-1>= 0 ){
            if(crim[a-p-1] == 1) cap++;
        }else if(a-p-1 < 0 && a+p-1 <= n-1){
            if(crim[a+p-1] == 1)cap++;
        }else if(crim[a+p-1] == 1 && crim[a-p-1] == 1) cap += 2;
        
        p++;
    }
    cout << cap;

    return 0;
}
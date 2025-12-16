#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >> n;
    vector<int>pessoas(2*n);
    int min_insta = INT_MAX;
    fo(i,2*n) cin >> pessoas[i];
    sort(all(pessoas));
    for(int i = 0;i<2*n;i++){
      
        for(int j=i+1;j<2*n;j++){
            int insta = 0;
            if(i==j)continue;
            else{
                bool t = false;
                for(int k = 0;k<2*n;k++){
                    if(k==i || k == j) continue;
                    else{
                        if(t)insta +=pessoas[k];
                        else insta -= pessoas[k];
                        t  = !t;
                    }
                }
                min_insta = min(min_insta,insta);
            }
        }
    }cout <<min_insta<<endl;
    return 0;
}
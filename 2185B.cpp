#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int>a(n);
        int maior =-1;
        int pos = -1;
        fo(i,n){
            cin >> a[i];
            if(a[i]>maior){
                maior = a[i];
                pos = i;
            }
        }
        swap(a[0],a[pos]);
        cout <<maior*n<<endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

void solve(){
    int n;cin >> n;
    vector<int>a(n);
    int max_pos = -1;
    int maior = -1;
    fo(i,n){
        cin >> a[i];
        if(a[i]>maior){
            maior = a[i];
            max_pos = i;
        }
    }
    a[max_pos]--;
    for(int k = 2;k<=n;k++){
        bool bom = false;
        for(int i = 0;i<=n-k;i++){
            set<int>nums;
            for(int j = i;j<k+i;j++)nums.insert(a[j]);
            if(nums.size()==1){
                bom = true;
                for(int j = i;j<k+i;j++)a[j]--;
                break;
            }
        }
        if(!bom){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout <<"YES"<<endl;
}


int main() {_
    int t;cin >> t;
    while(t--)solve();
    return 0;
}
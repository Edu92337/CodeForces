#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int a,b;
    cin >>a >> b;
    bool tag = false;
    vector<int>nums;
    nums.push_back(b);
    while (b > a) {
    if (b % 10 == 1) {
        b = (b - 1) / 10;
    } else if (b % 2 == 0) {
        b /= 2;
    } else {
        break; 
    }
    nums.push_back(b);
    if (b == a) {
        tag = true;
        break;
    }
}

    if(tag){
        cout <<"YES"<<endl;
        cout<<nums.size()<<endl;

        for(int i = nums.size()-1;i>=0;i--) cout <<nums[i]<<" ";
        cout <<endl;
    }else cout <<"NO"<<endl;
    return 0;
}
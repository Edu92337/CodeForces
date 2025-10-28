#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >> n;
    vector<int>nums(n);
    fo(i,n) cin >> nums[i];
    int qnt =1;
    int maior_seq = 1;

    for(int l = 1;l<n;l++){
        if(nums[l]>nums[l-1])qnt++;
        else{
            maior_seq = max(maior_seq,qnt);
            qnt = 1;

        }
    }
    maior_seq = max(maior_seq,qnt);
    cout  <<maior_seq<<endl;
    return 0;
}
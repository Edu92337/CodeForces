#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    vector<vector<int>>mat;
    pair<int,int>pos;
    fo(i,5){
        vector<int>linha(5);
        fo(j,5){
            int x;
            cin >> x;
            linha[j]=x;
            if(x == 1)pos = {i,j};
        }
    }cout << abs(2-pos.first)+abs(2-pos.second)<<endl;
    return 0;
}
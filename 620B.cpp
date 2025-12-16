#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    string a,b; cin >> a >> b;
    unordered_map<int,int>freq={
        {0,6},
        {1,2},
        {2,5},
        {3,5},
        {4,4},
        {5,5},
        {6,6},
        {7,3},
        {8,7},
        {9,6}
    };
    long long s = 0;
    for(int i = stoi(a);i<=stoi(b);i++){
        string n = to_string(i);
        for(char c : n)s+=freq[c-'0'];
    }
    cout <<s<<endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n;
    cin >> n;
    unordered_map<char,int>freq;
    string s;
    cin >> s;
    for(char c:s) freq[c]++;
    int qnt_0=0,qnt_1=0;
    qnt_0 = min(freq['z'],min(freq['e'],min(freq['r'],freq['o'])));
    qnt_1 = min(freq['o'],min(freq['n'],freq['e']));
    for(int i =0;i<qnt_1;i++) cout <<"1 ";
    for(int i =0;i<qnt_0;i++) cout<<"0 ";
    cout <<endl;

    return 0;
}
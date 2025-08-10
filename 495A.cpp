#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    string n;
    cin >> n;
    map<int,int>conv = {
        {0,2},
        {1,7},
        {2,2},
        {3,3},
        {4,3},
        {5,4},
        {6,2},
        {7,5},
        {8,1},
        {9,2}
    };
    int digito1 = (int)n[0] - '0';
    int digito2 = (int)n[1] - '0';
    cout << conv[digito1]*conv[digito2];
    return 0;
}
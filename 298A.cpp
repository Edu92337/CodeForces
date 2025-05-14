#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int n;
    cin >> n;
    string passos;
    cin >> passos;
    int primeiro_r=-1,ultimo_r=-1;
    int primeiro_l=-1,ultimo_l=-1;
    for (int i = 0; i < passos.size(); i++) {
        if (passos[i] == 'R') {
            if (primeiro_r == -1) primeiro_r = i;
            ultimo_r = i;
        }
        else if (passos[i] == 'L') {
            if (primeiro_l == -1) primeiro_l = i;
            ultimo_l = i;
        }
    }
    if(primeiro_r != -1 && primeiro_l != -1) cout << primeiro_r+1 << " " << primeiro_l;
    else if(primeiro_l == -1 && primeiro_r != -1) cout << primeiro_r+1 << " " << ultimo_r+2;
    else if(primeiro_r == -1 && primeiro_l != -1) cout << ultimo_l +1 << " " << primeiro_l; 
    

    return 0;
}
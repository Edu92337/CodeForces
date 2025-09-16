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
    vector<int>caiaques(2*n);
    fo(i,2*n) cin >> caiaques[i];
    sort(all(caiaques));
    int menor_insta = INT_MAX;
    for(int i = 0;i<2*n;i++){
        for(int j =i+1;j<2*n;j++){
            int instabilidade = 0;
            bool turno = false;
            for(int k = 0;k<2*n;k++){
                if(k == i || k == j) continue;
                else{
                    if(turno) instabilidade += caiaques[k];
                    else instabilidade -= caiaques[k];
                    turno = !turno;
                }
            }
            menor_insta = min(menor_insta, instabilidade);
        }
    }cout << menor_insta<<endl;
    return 0;
}
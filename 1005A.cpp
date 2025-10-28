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
    int qnt=0;
    vector<int>passos(n);
    vector<int>tam;
    fo(i,n) cin >> passos[i];
    for(int i =0;i<n;i++){
        if(passos[i]==1){
            if(i==0)qnt++;
            else{
                qnt++;
                tam.push_back(passos[i-1]);
            }
        }
    }
    if(qnt > tam.size()) tam.push_back(passos.back());
    cout <<qnt<<endl;
    for(int x:tam) cout <<x<<" ";
    cout <<endl;
    return 0;
}
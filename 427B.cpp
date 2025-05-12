#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int n,t,c;
    cin >> n >> t >> c;
    vector<int> prisioneiros(n);
    fo(i,n) cin >> prisioneiros[i];
    int seg = 0,resp = 0;
    fo(i,n){
        if(prisioneiros[i] <=t){
            seg++;
            if(seg>=c) resp++;
        }
        else{
            seg = 0;
        }
    }cout << resp;
    


    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    long long n;
    cin >> n;
    fo(i,n){
        long long a,b;
        cin >> a >> b;
        long long q = a/b;
        long long resto = a % b;
        if (resto!=0){
            cout << (q+1)*b-a<<endl;
        }else{
            cout << resto<<endl;
        }
    }
    return 0;
}
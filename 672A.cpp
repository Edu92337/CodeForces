#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int n; cin >> n;
    int digitos = 0;
    for(int i = 1; i <= 1000; i++){
        int tamanho = floor(log10(i)) + 1;
        if(digitos + tamanho >= n){
            int pos = n - digitos - 1; 
            cout << to_string(i)[pos] << endl;
            return 0;
        }
        
        digitos += tamanho;
    }
    return 0;
}
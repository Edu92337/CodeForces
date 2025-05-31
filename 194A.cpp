#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define endl '\n'

int main() {
    int n,k;
    cin >> n >> k;
    int soma;
    vector<int>provas(n,2);
    soma = 2*n;
    
    int reprovados = n;
    int i = 0;
    while(soma <k && reprovados>0){
        provas[i]++;
        reprovados--;
        if(i==n-1) i = 0;
        else i++;
        soma++;

    }
    cout << reprovados;
    return 0;
}
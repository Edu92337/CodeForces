#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define endl '\n'

int main() {
    string parede;
    cin >> parede;
    int n = parede.size();
    int voltas = 0;
    int bag = 0;
    char tipo;
    for(int i = 0;i<n;i++){
        if(bag == 0){
            tipo = parede[i];
            bag++;
        }else{
            if(parede[i]!=tipo){
                bag = 1;
                voltas++;
                tipo = parede[i];
            }else{
                if(bag <5){
                    bag++;
                }else{
                    bag = 1;
                    voltas++;
                }
            }
        }
    }cout << voltas+1;
    return 0;
}
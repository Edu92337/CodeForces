#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> votos(n);
    for(int i = 0; i < n; i++) cin >> votos[i];

    int doces = 0;
    
    while (true){
        int max = 1;
        for(int i = 1;i<n;i++){
            if(votos[i]>votos[max]) max = i;
        }
        if(votos[0]>votos[max]) break;
        doces++;
        votos[0]++;
        votos[max]--;
    }
    cout << doces;
    return 0;
}
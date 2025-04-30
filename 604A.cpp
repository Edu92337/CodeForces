#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<double>tempos(5);
    vector<int>pesos(5);
    int hs,hu;
    for(int i =0;i<5;i++) cin >> tempos[i];
    for(int i =0;i<5;i++) cin >> pesos[i];
    cin >> hs >> hu;
    int score = 0;
    vector<int>x_bons;
    vector<int>pesos_bons;
    vector<double>tempos_bons;
    for(int i = 0;i < 5;i++){
        if(0.3*500*(i+1) < (1-tempos[i]/250)*500*(i+1)- 50*pesos[i]){
            tempos_bons.push_back(tempos[i]);
            pesos_bons.push_back(pesos[i]);
            x_bons.push_back(500*(i+1));
        }else score += 0.3*500*(i+1);
    }
    double soma_t = 0;
    int soma_x=0,soma_w=0;
    for(int i = 0 ;i < x_bons.size();i++){
        soma_t += tempos_bons[i]*x_bons[i];
        soma_x += x_bons[i];
        soma_w += pesos_bons[i];
    }
    soma_t /= 250;
    score += soma_x-soma_t-50*soma_w;
    score += 100*hs -50*hu;
    cout << score;
 
 
    return 0;
}

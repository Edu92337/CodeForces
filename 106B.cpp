#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>>laptops(n,vector<int>(4,0));
    vector<vector<int>>bons;
    fo(i,n){
        fo(j,4) cin >> laptops[i][j];
    }
    for(auto laptop1 : laptops){
        bool tag = true;
        for(auto laptop2 : laptops){
            if(laptop1 != laptop2){
                if(laptop2[0]>laptop1[0] && laptop2[1]>laptop1[1] && laptop2[2]>laptop1[2]){
                    tag = false;
                    break;
                }
            }
        }
        if(tag == true){
            bons.push_back(laptop1);
        }
    }
    
    int val = 1001;
    int pos = -1;
    int i;
    for(i = 0;i<bons.size();i++){
        if(bons[i][3]<val){
            val = bons[i][3];
            pos = i;
        }
    }
    
    vector<int>melhor=bons[pos];
    for(int i = 0;i<n;i++){
        if(laptops[i][3]==melhor[3]){
            cout << i+1;
            break;
        }
    }
    return 0;
}
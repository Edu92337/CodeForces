#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

void solve(){
    int n;cin >> n;
    deque<int>vec;
    int menor = 101;
    int maior = 0;
    int moves = 0;
    fo(i,n){
        int x;cin >> x;
        vec.push_back(x);
        menor = min(menor,x);
        maior = max(maior,x); 
    }
    bool tag_menor=true,tag_maior = true;
    while((tag_menor || tag_maior) && !vec.empty()){
        int d_menor_e=101,d_menor_d=101,d_maior_e=101,d_maior_d=101;
        fo(i,vec.size()){
            if(vec[i] == menor){
                d_menor_e = i;
                d_menor_d = vec.size()-1-i;
            }else if(vec[i]==maior){
                d_maior_e = i;
                d_maior_d = vec.size()-1-i;
            }
        }
        
        bool e = false,d = false;
        int menor_dist = min(d_menor_d,min(d_menor_e,min(d_maior_d,d_maior_e)));
        if(menor_dist == d_menor_e || menor_dist == d_maior_e) e = true;
        else if(menor_dist == d_menor_d || menor_dist == d_maior_d) d = true;
        if(e){
            if(vec.front() == menor) tag_menor = false;
            else if(vec.front() == maior) tag_maior = false;
            vec.pop_front();
            moves++;
        }else if(d){
            if(vec.back() == menor) tag_menor = false;
            else if(vec.back() == maior) tag_maior = false;
            vec.pop_back();
            moves++;
        }
    }
    cout << moves<<endl;
}


int main() {_
    int t;cin >> t;
    while(t--) solve();
    return 0;
}
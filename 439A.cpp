#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
 
int main() {_
    int n,d;cin >> n >> d;
    vector<int>vec(n);
    fo(i,n) cin >> vec[i];
    sort(all(vec),greater<int>());
    int t = 0;
    int qnt = 0;
    int i = 0;
    bool ultimo = false;
    while(t<=d || i < n){
        if(t+vec[i]<=d) t+= vec[i];
        else break;
        if(t + 10<=d){
            qnt+=2;
            t+=10;
        }else if(t+5<=d && i==n-1){
            t+=5;
            qnt++;
        }else {
            ultimo = true;
            break;
        }
        i++;
        
    }
    while(t+10<=d){
        t+=10;
        qnt+=2;
    }
    while(t+5<=d){
        qnt++;
        t+=5;
    }
    if(t>0 && t <=d && ultimo? i>=n-1 : i>n-1){
        cout << qnt<<endl;
    }else cout <<-1<<endl;
    return 0;
}
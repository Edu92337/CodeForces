#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

bool primo(int x){
    for(int i =2;i*i<=x;i++){
        if(x%i==0)return false;
    }
    return true;
}

int main() {_
    int n;cin >> n;
    if(primo(n)){
        cout <<1<<endl;
        cout << n<<endl;
    }else{
        for(int i =3;i<=n;i++){
            if(primo(i)&&primo((n-i)/2)){
                cout <<3<<endl;
                cout <<i<<" "<<(n-i)/2<<" "<<(n-i)/2<<endl;
                break;
            }
        }
    }
    return 0;
}
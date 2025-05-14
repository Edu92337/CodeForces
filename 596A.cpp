#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0;i<n;i++)
#define endl '\n'

int main() {
    int n;
    cin >> n;
    vector<pair<int,int> > pontos(n,mp(0,0));
    fo(i,n){
        cin >> pontos[i].first >> pontos[i].second; 
    }
    if(pontos.size() == 1) cout << -1;
    else if(pontos.size() == 2) {
        if (pontos[0].first == pontos[1].first || pontos[0].second == pontos[1].second)cout << -1;
        else cout << abs((pontos[1].first-pontos[0].first)*(pontos[1].second - pontos[0].second));
    }
    else if(pontos.size() == 3 || pontos.size() == 4) {
        cout << abs(pontos[0].first*pontos[1].second + pontos[1].first*pontos[2].second - pontos[2].first*pontos[1].second - pontos[1].first*pontos[0].second + pontos[2].first*pontos[0].second - pontos[0].first*pontos[2].second);

    }
    return 0;
}
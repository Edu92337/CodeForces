#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


long long dist(long long x1,long long y1,long long x2,int y2){
    float del_x= x1-x2;
    float del_y = y1-y2;
    return del_x*del_x+del_y*del_y;
}
int main() {_
    int n;
    cin >> n;
    long long max_dist = 0;
    vector<long long>x(n),y(n);
    fo(i,n) cin >> x[i];
    fo(i,n) cin >> y[i];
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            max_dist=max(max_dist,dist(x[i],y[i],x[j],y[j]));
        }
    }
    cout <<max_dist<<endl;
    return 0;
}
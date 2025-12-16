#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int x1,y1,x2,y2;cin >> x1>>y1>>x2>>y2;
    int x3,y3,x4,y4;
    if(x1==x2){
        if(y2>y1){
            x3 = y2-y1+x1;
            x4 = y2-y1+x1;
        }else{
            x3 = y1-y2+x2;
            x4 = y1-y2+x2;
        }
        y3 = y1;
        y4 = y2;
    }else if(y1==y2){
        if(x2>x1){
            y3 = x2-x1+y1;
            y4 = x2 - x1+y1;
        }else{
            y3 = x1-x2+y2;
            y4 = x1-x2+y2;
        }
        x3 = x1;
        x4 = x2;
    }else{
        if(abs(x1-x2)!=abs(y1-y2)){
            cout<<-1<<endl;
            return 0;
        }else{
            x3 = x1;
            y3 = y2;
            x4 = x2;
            y4 = y1;
        }

    }

    
    cout <<x3<<" "<<y3<<" "<<x4 <<" "<<y4<<endl;
    return 0;
}
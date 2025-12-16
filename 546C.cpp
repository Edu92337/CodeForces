#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >> n;
    int k;cin >> k;
    deque<int>dq1,dq2;
    set<pair<deque<int>,deque<int>>>vis;
    fo(i,k){
        int x;cin >> x;
        dq1.push_front(x);
    }
    cin >> k;
    fo(i,k){
        int x;cin >> x;
        dq2.push_front(x);
    }
    int moves = 0;
    pair<deque<int>,deque<int>>atual = mp(dq1,dq2);
    while(vis.count(atual)==0 && (dq1.size()!=0) && (dq2.size()!=0)){
        vis.insert(atual);
        int c1 = dq1.back();
        int c2 = dq2.back();
        if(c1 > c2){
            dq1.push_front(c2);
            dq1.push_front(c1);
            dq1.pop_back();
            dq2.pop_back();
        }else{
            dq2.push_front(c1);
            dq2.push_front(c2);
            dq1.pop_back();
            dq2.pop_back();
        }
        atual = mp(dq1,dq2);
        moves++;
    }
    if(dq1.size()==0){
        cout <<moves<<" "<<2<<endl;
    }else if(dq2.size()==0){
        cout <<moves<<" "<<1<<endl;
    }else cout <<-1<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n;
    int moves = 0;
    cin >> n;
    deque<int>f1,f2;
    set<pair<deque<int>,deque<int>>>vistos;
    int k1,k2;
    cin >> k1;
    fo(i,k1){
        int x;cin >> x;
        f1.push_back(x);
    }
    cin >>k2;
    fo(i,k2){
        int x;cin >> x;
        f2.push_back(x);
    }
    bool tag = true;
    while(f1.size()>0 && f2.size()>0){
        int t1=f1.front(),t2=f2.front();
        if(vistos.count(make_pair(f1,f2))){
            tag = false;
            break;
        }else{
            vistos.insert(make_pair(f1,f2));
        moves++;
        if(t1>t2){
            f1.push_back(t2);
            f1.push_back(t1);
            f2.pop_front();
            f1.pop_front();
        }else{
            f2.push_back(t1);
            f2.push_back(t2);
            f1.pop_front();
            f2.pop_front();
        }
    }
        if(f1.size()==0 || f2.size()==0) break;
    
        }
    if(tag){
        cout <<moves<<" ";
        if(f1.size()!=0) cout <<1<<endl;
        else cout << 2<<endl;
    }else cout <<-1<<endl;
    return 0;
}
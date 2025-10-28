#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
const int MAX = 50;

long long p[MAX];
long long s[MAX];
vector<long long>d(MAX,1);

long long find_set(long long v){
    return p[v]=(v==p[v]?v:find_set(p[v]));
}

void union_set(long long a,long long b){
    a = find_set(a);
    b = find_set(b);
    if(a!=b){
        if(s[a]<s[b])swap(a,b);
        p[b]=a;
        s[a]+=s[b];
    }
}

int main() {_
    long long n,m;cin >> n >> m;
    fo(i,n){
        p[i+1]=i+1;
        s[i+1]=1;
    }
    set<long long>perigos;
    fo(i,m){
        long long x,y;cin >> x >> y;
        union_set(x,y);
    }
    long long comp = 0;
    fo(i,n){
        if(find_set(i+1)==i+1)comp++;
    }
    cout << (1LL << (n - comp)) << endl;

    return 0;
}
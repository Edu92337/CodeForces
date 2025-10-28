#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

int main() {_
    int n;cin >> n;
    vector<string> evolucoes = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    string s;cin >> s;
    vector<string>possiveis;
    if(s == "......")cout <<"espeon"<<endl;
    else if(s =="........")cout <<"vaporeon"<<endl;
    else{
        for(int i = 0;i<n;i++){
            if(s[i]!='.'){
                for(string e:evolucoes){
                    if(e[i]==s[i] && e.size()== n)possiveis.push_back(e);
                    else{
                        if(count(all(possiveis),e))possiveis.erase(remove(all(possiveis),e),possiveis.end());
                    }
                }
            }
        }cout << possiveis[0]<<endl;
    }
    
    return 0;
}
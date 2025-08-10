#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fo(i,n) for(int i = 0; i < n; i++)

int main() {
    int n,k;
    cin >> n >> k;
    vector<int>nums(n,0);
    fo(i,n) cin >> nums[i];
    int j = 0;
    int max_sum=INT_MAX;
    int indice = -1;
    while(j<n){
        int sum = 0;
        int pulo = k-1;
        int start  = j;
        int grupo = n / k;
        if (grupo == 0) grupo = 1;  

        for (int i = start; i < n; i += k) {
            sum += nums[i];
        }
        
        if(sum<max_sum){
            max_sum = sum;
            indice = j;
        }j++;


    }cout << indice+1;
    return 0;
}
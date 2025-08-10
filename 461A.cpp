#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    sort(all(nums));

    long long soma = accumulate(all(nums), 0LL);
    long long score = 0;

    for(int i = 0; i < n - 1; i++) {
        score += soma;
        soma -= nums[i];
        score += nums[i];
    }

    score += nums[n - 1]; 

    cout << score << '\n';
    return 0;
}

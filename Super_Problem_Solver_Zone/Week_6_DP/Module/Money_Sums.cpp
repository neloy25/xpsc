#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int maxN = 105, maxS = 1e5 + 7;
ll n, v[maxN], dp[maxN][maxS];
set<int> sums;

void f(int i, int sum) {
    if(i > n) {
        sums.insert(sum);
        return;
    }

    if(dp[i][sum] != -1) return;
    dp[i][sum] = 1;

    f(i + 1, sum);
    f(i + 1, sum + v[i]);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    memset(dp, -1, sizeof(dp));
    f(1,0);
    cout << sums.size() - 1 nl;
    for(int val : sums) {
        if(val == 0) continue;
        cout << val << " ";
    }
    cout nl;
    return 0;
}
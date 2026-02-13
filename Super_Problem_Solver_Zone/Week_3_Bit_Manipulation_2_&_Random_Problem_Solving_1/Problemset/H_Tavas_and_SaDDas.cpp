#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> lucky;
    lucky.push_back(0);
    int idx = 0;
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < (1 << i); j++) {
            lucky.push_back(lucky[idx] * 10 + 4);
            lucky.push_back(lucky[idx] * 10 + 7);
            idx++;
        }
    }

    ll n;
    cin >> n;

    auto it = lower_bound(lucky.begin(), lucky.end(), n);
    cout << it - lucky.begin();
    return 0;
}
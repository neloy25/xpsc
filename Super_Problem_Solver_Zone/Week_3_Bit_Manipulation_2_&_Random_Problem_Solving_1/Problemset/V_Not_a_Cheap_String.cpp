#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define pii pair<ll,ll>
#define vpii vector<pii>

void solve() {
    string s;
    cin >> s;

    int p, n = s.size(), sum = 0;
    cin >> p;

    vpii prices;
    set<ll> dlt;
    for(int i = 0; i < n; i++) {
        ll pr = s[i] - 'a' + 1;
        prices.push_back({pr, i});
        sum+=pr;
    }

    sort(prices.begin(), prices.end(), greater<pii>());
    for(int i = 0; i < n; i++) {
        auto [x,y] = prices[i];
        // cout << x << " " << y << " " << sum nl;
        if(p < sum) {
            sum-=x;
            dlt.insert(y);
        } else {
            break;
        }
    }


    for(int i = 0; i < n; i++) {
        if(!dlt.count(i)) cout << s[i];
    }

    cout nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,m,k;
    cin >> n >> m >> k;
    ll arr[n + 1];

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    vector<ll> diff_ops(m + 2,0);
    vector<ll> diff_arr(n + 2,0);
    vector<pair<pair<ll,ll>,ll>> ops(m + 1);

    for(int i = 1; i <= m; i++) {
        ll l , r, d;
        cin >> l >> r >> d;

        ops[i] = {{l,r},d};
    }

    for(int i = 0; i < k; i++) {
        int x,y;
        cin >> x >> y;

        diff_ops[x]++;
        diff_ops[y + 1]--;
    }

    ll prev = 0;
    for(int i = 1; i <= m; i++) {
        ll mul = prev + diff_ops[i];
        prev = mul;
        ops[i].second *= mul;
    }

    for(int i = 1; i <= m; i++) {
        auto [x,y] = ops[i].first;

        diff_arr[x]+=ops[i].second;
        diff_arr[y + 1]-=ops[i].second;
    }

    prev = 0;
    for(int i = 1; i <= n; i++) {
        ll add = prev + diff_arr[i];
        prev = add;
        arr[i] += add;
    }

    for(int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}


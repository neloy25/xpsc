#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (auto &c : v)
        cin >> c;

    deque<pair<ll, ll>> dq_min;
    deque<pair<ll, ll>> dq_max;

    ll l = 0;
    ll res = 0;

    for (ll i = 0; i < n; i++)
    {
        while (!dq_min.empty() && dq_min.back().first > v[i])
            dq_min.pop_back();
        dq_min.push_back({v[i], i});

        while (!dq_max.empty() && dq_max.back().first < v[i])
            dq_max.pop_back();
        dq_max.push_back({v[i], i});

        while (!dq_min.empty() && !dq_max.empty() &&
               dq_max.front().first - dq_min.front().first > x)
        {
            if (dq_min.front().second == l)
                dq_min.pop_front();
            if (dq_max.front().second == l)
                dq_max.pop_front();
            l++;
        }

        res += (i - l + 1);
    }

    cout << res << endl;
    return 0;
}

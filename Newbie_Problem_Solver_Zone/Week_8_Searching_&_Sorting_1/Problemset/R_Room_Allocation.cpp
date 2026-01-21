#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<pair<ll,ll>>
#define pll pair<ll,ll>

#define topf top().first
#define tops top().second

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;

    vector<array<ll,3>> cust(n); 
    for(int i = 0; i < n; i++) {
        cin >> cust[i][0] >> cust[i][1];
        cust[i][2] = i;
    }

    sort(cust.begin(), cust.end());

    vector<ll> res(n);

    priority_queue<pll, vll, greater<pll>> vora;
    queue<ll> faka;

    ll room = 0;

    for(int i = 0; i < n; i++) {
        ll a = cust[i][0];
        ll b = cust[i][1];
        ll idx = cust[i][2];

        while(!vora.empty() && vora.topf < a) {
            faka.push(vora.tops);
            vora.pop();
        }

        if(faka.empty()) {
            res[idx] = ++room;
            vora.push({b,room});
        } else {
            res[idx] = faka.front();
            vora.push({b,faka.front()});
            faka.pop();
        }
    }

    cout << room << "\n";
    for(ll x : res) cout << x << " ";
    cout << "\n";

    return 0;
}

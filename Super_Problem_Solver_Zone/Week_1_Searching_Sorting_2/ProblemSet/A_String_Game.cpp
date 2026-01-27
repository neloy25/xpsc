#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

bool calcRes(string t, string s, vector<ll> &v, ll x) {
    // cout << t.size() << endl;
    vector<ll> rem;
    for(int i = x; i < t.size(); i++) {
        // cout << v[i] << " ";
        rem.push_back(v[i]);
    }
    sort(rem.begin(), rem.end());

    string temp = "";
    for(int idx : rem) {
        temp.push_back(t[idx-1]);
    }

    int i = 0, j = 0;
    while(i < s.size() && j < temp.size()) {
        if(s[i] != temp[j]) j++;
        else {
            i++;
            j++;
        }
    }

    if(i >= s.size()) return true;
    else return false;
}

ll binarySearch(string t, string s, vector<ll> &v) {
    ll l = 0, r = t.size();
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (calcRes(t,s,v,mid)) l = mid + 1;
        else r = mid - 1;
    }
    return l - 1;
}

void solve() {
    string s,t;
    cin >> t >> s;

    ll n = t.size();
    vector<ll> v(n);
    for(auto &x : v) cin >> x;
    
    cout << binarySearch(t,s,v);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}


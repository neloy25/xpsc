#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &x : v) cin >> x;

    priority_queue<int> pq;

    ll res = 0;
    for(int val : v) {
        if(val > 0) pq.push(val);
        else {
            if(!pq.empty()) {
                res+= pq.top();
                pq.pop();
            }
        }
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


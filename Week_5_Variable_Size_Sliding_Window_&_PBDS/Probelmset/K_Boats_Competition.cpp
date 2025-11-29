#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    vector<int> sums(105,0);
    multiset<int> val(v.begin(),v.end());

    for(int i = 2; i <= 100; i++) {
        multiset<int> tmp = val;
        while(!tmp.empty()) {
            auto it = tmp.begin();
            if(*it > i) break;
            int need = i - *it;
            tmp.erase(it);
            auto it2 = tmp.find(need);
            if(it2 != tmp.end()) {
                sums[i]++;
                tmp.erase(it2);
            }
        }
    }

    int res = 0;
    for(int i = 2; i <= 100; i++) {
        res = max(res,sums[i]);
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


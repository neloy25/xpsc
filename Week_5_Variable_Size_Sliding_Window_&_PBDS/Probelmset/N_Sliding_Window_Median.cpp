#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Ordered Set
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less_equal<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;
// Usage:
// os.insert(x)        -> insert element
// os.erase(x)         -> erase element
// *os.find_by_order(k) -> k-th element (0-based)
// os.order_of_key(x)   -> # of elements < x
#define pii pair<int,int>
int main() {
    ordered_set<pii> os;

    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    for(auto &x : v) cin >> x;
    int uid = 0; 
    for(int i = 0; i < n; i++) {
        os.insert({v[i],uid++});

        if(i >= k - 1) {
            if(i == k - 1) {
                cout << os.find_by_order((k - 1) / 2)->first << " ";
                continue;
            }
            auto it = os.lower_bound({v[i-k],-1});
            os.erase(it);
            cout << os.find_by_order((k - 1) / 2)->first << " ";
        }
    }
    return 0;
}
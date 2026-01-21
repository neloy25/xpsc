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


void solve() {
    int n;
    cin >> n;
    ordered_set<int> os;
    long long res = 0;
    for(long long i = 0; i < n; i++) {
        int val;
        cin >> val;
        os.insert(val);
        long long tmp = i - (long long)(os.order_of_key(val));
        res += tmp;
    }

    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
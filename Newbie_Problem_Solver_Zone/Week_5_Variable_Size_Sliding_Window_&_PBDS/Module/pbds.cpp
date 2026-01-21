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

int main() {
    
    return 0;
}
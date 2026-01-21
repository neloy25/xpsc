#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x,n;
    cin >> x >> n;

    set<int> pos;
    pos.insert(0);
    pos.insert(x);

    multiset<int,greater<int>> dist;
    dist.insert(x);

    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;

        auto it2 = pos.upper_bound(val);
        auto it1 = it2;
        it1--;
        int d = *it2 - *it1;
        auto del = dist.find(d);
        dist.erase(del);

        dist.insert(*it2 - val);
        dist.insert(val - *it1);
        pos.insert(val);

        cout << *dist.begin() << " ";
    }
    return 0;
}


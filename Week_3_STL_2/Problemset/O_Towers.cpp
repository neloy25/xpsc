#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    multiset<int> ms;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;

        auto it = ms.upper_bound(val);
        if(it == ms.end()) ms.insert(val);
        else {
            ms.erase(it);
            ms.insert(val);
        }
    }

    cout << ms.size() << endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    multiset<int> s;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.insert(val);
    }

    int i = 1;
    for(i; i <= n; i++) {
       auto it = s.lower_bound(i);
       if(it == s.end()) break;
       else s.erase(it);
    }
    cout << i - 1;
    return 0;
}


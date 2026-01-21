#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    set<int> s;
    int t;
    cin >> t;
    while(t--){
       int a;
       cin >> a;
       
        if(a == 1) {
            int x;
            cin >> x;

            s.insert(x);
        } else if(a == 2) {
            int x;
            cin >> x;

            if(s.count(x)) s.erase(x);
        } else {
            int x;
            cin >> x;

            if(s.count(x)) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}


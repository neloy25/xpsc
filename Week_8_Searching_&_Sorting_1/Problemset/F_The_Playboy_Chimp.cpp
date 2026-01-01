#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<ll> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;

        auto it = lower_bound(v.begin(),v.end(),a);
        if(it == v.begin()) cout << "X ";
        else {
            it--;
            cout << *it << " ";
        }

        it = upper_bound(v.begin(),v.end(),a);
        if(it == v.end()) cout << "X\n";
        else cout << *it << endl;
    }
    return 0;
}


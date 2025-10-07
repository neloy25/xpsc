#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    int a[n];

    ll res = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i != 0 && a[i] < a[i - 1]) {
            res+= a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }

    cout << res << endl;
    return 0;
}


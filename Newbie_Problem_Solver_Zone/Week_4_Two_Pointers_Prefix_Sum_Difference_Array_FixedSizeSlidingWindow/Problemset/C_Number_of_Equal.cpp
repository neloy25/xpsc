#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;

    vector<int> a(n),b(m);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    int i = 0, j = 0;
    long long res = 0;
    while(i < n && j < m) {
        if(a[i] == b[j]) {
            int val = a[i];

            long long f = 0, s = 0;
            while(i < n && a[i] == val) {
                f++;
                i++;
            }

            while(j < m && b[j] == val) {
                s++;
                j++;
            }

            res+= f * s;
        } else if(a[i] > b[j]) {
            j++;
        } else {
            i++;
        }
    }

    cout << res << endl;
    return 0;
}


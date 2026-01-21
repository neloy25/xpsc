#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m),res;
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    int j = 0;
    for(int i = 0; i < m; i++) {
        while(j < n && a[j] < b[i]) {
            j++;
        }
        res.push_back(j);
    }

    for(int val : res) {
        cout << val << " ";
    }
    return 0;
}


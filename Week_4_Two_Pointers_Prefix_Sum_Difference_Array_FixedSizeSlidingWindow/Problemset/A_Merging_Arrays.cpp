#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    int i = 0, j = 0;
    vector<int> res;
    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            res.push_back(a[i]);
            i++;
        } else {
            res.push_back(b[j]);
            j++;
        }
    }

    while(i < n) {
        res.push_back(a[i]);
        i++;
    }

    while(j < m) {
        res.push_back(b[j]);
        j++;
    }

    for(int val : res) {
        cout << val << " ";
    }
    return 0;
}


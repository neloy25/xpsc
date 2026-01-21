#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<ll> v(n);
    for(auto &x : v) cin >> x;

    ll l = 0,r = n - 1;

    ll left = 0,right = 0;
    ll res=0;
    while(l < r) {
        if(left == right) {
            res = left;
            left+= v[l];
            right += v[r];
            l++;
            r--;
        } else if(left > right) {
            right += v[r];
            r--;
        } else {
            left+= v[l];
            l++;
        }
    }
    if(l == r) {
        if(left +v[l] == right) res = right;
        if(right + v[r] == left) res = left;
    }
    if(left == right) res = left;

    cout << res << endl;
    return 0;
}


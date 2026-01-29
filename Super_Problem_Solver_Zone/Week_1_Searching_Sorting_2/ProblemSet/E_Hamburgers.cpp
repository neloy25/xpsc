#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;
    ll b,s,c;
    cin >> b >> s >> c;
    ll pb,ps,pc;
    cin >> pb >> ps >> pc;
    ll tk; cin >> tk;


    auto ok = [&](ll x)
    {
        ll nb = 0,ns = 0,nc = 0;
        for(int i = 0; i < str.size(); i++) {
            if(str[i] == 'B') nb++;
            else if(str[i] == 'S') ns++;
            else nc++;
        }

        nb*= x;ns*=x;nc *= x;
        nb = max(0LL, nb - b);
        ns = max(0LL, ns - s);
        nc = max(0LL, nc - c);

        ll exp = nb * pb + ns * ps + nc * pc;
        return exp <= tk;
    };

    ll l = 0, r = 1e13, ans = 0, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (!ok(mid))
        {
            r = mid - 1;
        }
        else{
            ans = mid;
            l = mid + 1;
        }       
    }
    cout << ans << endl;

    // cout << ok(9);

    return 0;
}
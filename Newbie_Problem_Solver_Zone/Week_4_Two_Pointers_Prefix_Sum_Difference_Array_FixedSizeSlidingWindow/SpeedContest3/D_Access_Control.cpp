#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    string s;
    cin >> s;

    int swipe = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (swipe == 0) {
                cout << "NO\n";
                return;
            }
            swipe--;
        } else {
            swipe = x;
        }
    }

    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

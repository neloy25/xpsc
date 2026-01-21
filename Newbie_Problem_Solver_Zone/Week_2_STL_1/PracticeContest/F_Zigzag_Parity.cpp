#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 3)
    {
        cout << "1 3 2\n";
        return;
    }
    vector<int> p;
    int op = (n / 2);
    int x = 0;
    if ((n + 1) %  4 != 0)
    {
        for (int i = 1; i <= op; i++)
        {
            if (i % 2)
            {
                p.push_back(x + 1);
                p.push_back(x + 2);
            }
            else
            {
                p.push_back(x + 2);
                p.push_back(x + 1);
            }
            x += 2;
        }
    }

    else
    {
        for (int i = 1; i <= op; i++)
        {
            if (i % 2)
            {
                p.push_back(x + 2);
                p.push_back(x + 1);
            }
            else
            {
                p.push_back(x + 1);
                p.push_back(x + 2);
            }
            x += 2;
        }
    }
    if (n % 2)
        p.push_back(n);
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    cout << endl;
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

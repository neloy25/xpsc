#include <bits/stdc++.h>
using namespace std;

void solve()
{
    map<int, int> arrive;
    map<int, priority_queue<int,vector<int>,greater<int>>, greater<int>> money;
    int n;
    cin >> n;
    int customer = 1;

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;

        if (a == 1)
        {
            int m;
            cin >> m;
            arrive[customer] = m;
            money[m].push(customer);
            customer++;
        } 
        else if(a == 2) {
            int arr = arrive.begin()->first;
            int mon = arrive.begin()->second;
            if(!money[mon].empty()) money[mon].pop();
            if(money[mon].empty()) money.erase(mon);
            arrive.erase(arr);
            cout << arr << " ";
        } 
        else if(a == 3) {
            auto &pq = money.begin()->second;
            int arr = pq.top();
            cout << arr << " ";
            pq.pop();
            if(pq.empty()) money.erase(money.begin());
            arrive.erase(arr);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    vector<int> pos(n + 1);
    vector<int> val(n + 1,0);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }

    int rounds = 1;
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i - 1]) {
            rounds++;
            val[i] = 1;
            cout << pos[i] << endl;
        }
    }

    int a,b;
    cin >> a >> b;
    cout << pos[a] << " " << pos[b] << endl;
    swap(pos[a], pos[b]);

    
    cout << rounds << "\n";
    return 0;
}


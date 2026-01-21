#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x,y,k;
    cin >> x >> y >> k;

    cout << (abs(x - y) <= k ? "Yes" : "No") << "\n";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

typedef double db;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    db ans = 0;

    while(n--) {
        db a,b;
        cin >> a >> b;

        ans += a * b;
    }

    cout << ans << setprecision(3) << endl;
    return 0;
}


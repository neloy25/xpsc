#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int a,b;
    cin >> a >> b;

    int r;
    if(b % 2 == 1 && a % 2 == 1) r = (b + 1) / 2;
    else r = b / 2;

    if(r % 2 == 0) yes;
    else no;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}


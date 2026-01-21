#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int alice[n];
    int bob[n];

    for(int i = 0; i < n;i++) {
        cin >> alice[i];
    }

    for(int i = 0; i < n;i++) {
        cin >> bob[i];
    }

    int days = 0;
    for(int i = 0; i < n;i++) {
        if(bob[i] * 2 >= alice[i] && bob[i] <= alice[i] * 2) {
            days++;
        }
    }

    cout << days << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


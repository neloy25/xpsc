#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;


        int cnt0 = 0,cnt1 = 0;
        for(char ch: s) {
            if(ch == '0') cnt0++;
            else cnt1++;
        }

        int moves = min(cnt0,cnt1);

        if(moves % 2) cout << "Zlatan\n";
        else cout << "Ramos\n";
    }
    return 0;
}

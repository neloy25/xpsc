#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;


void solve() {
    int n;
    cin >> n;

    int ans = 0;
    for(int i = 2; i <= n; i++) {
        set<int> s;
        int k = i;
        while(k > 1) {
            bool flag = true;
            for(int j = 2; j * j <= i; j++) {
                if(k % j == 0) {
                    flag = false;
                    s.insert(j);
                    k /= j;
                    break;
                }
            }
            if(flag) {
                s.insert(k);
                break;
            }
        } 
        if(s.size() == 2) ans++;
    }

    cout << ans nl;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}
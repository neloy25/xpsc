#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

vector<int> primes;
void solve() {
    int d;
    cin >> d;

    auto l = lower_bound(primes.begin(),primes.end(),1 + d);
    auto r = lower_bound(primes.begin(),primes.end(),*l + d);

    cout << *l * *r << endl;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 5 * 10015;
    vector<bool> prime(n + 1, true);
    for(int i = 2; i <= n; i++) {
        if(prime[i]) {
            for(int j = i + i; j <= n; j+=i) {
                prime[j] = false;
            }
        }
    }

    for(int i = 2; i <= n; i++) {
        if(prime[i]) primes.push_back(i);
    }

    int t;
    cin >> t;
    while(t--) solve();
}
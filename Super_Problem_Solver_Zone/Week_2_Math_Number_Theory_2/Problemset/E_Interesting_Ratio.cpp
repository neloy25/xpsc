#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

const ll N = 1e7 + 5;
vector<ll> isPrime(N, 0);
void sieve() {
    for(int i = 2; i < N; i++) {
        if(isPrime[i] == 0) {
            for(int j = i; j < N; j+=i) {
                isPrime[j]++;
            }
        }
    }
    for(int i = 2; i < N; i++) {
        isPrime[i] = isPrime[i - 1] + isPrime[i];
    }
}

void solve() {
    int n;
    cin >> n;
    cout << isPrime[n] nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int t;
    cin >> t;
    while(t--) solve();
}
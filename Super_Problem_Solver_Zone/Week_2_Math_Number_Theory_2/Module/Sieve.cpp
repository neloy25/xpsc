#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;

    vector<bool> prime(n + 1, true);

    for(int i = 2; i <= n; i++) {
        if(prime[i]) {
            for(int j = i + i; j <= n; j+=i) {
                prime[j] = false;
            }
        }
    }

    for(int i = 2; i <= n; i++) {
        if(prime[i]) cout << i << endl;
    }
}
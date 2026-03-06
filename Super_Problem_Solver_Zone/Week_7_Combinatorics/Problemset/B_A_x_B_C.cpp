#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

const int maxN = 1e6 + 5;
int divisor[maxN];
int pre[maxN];

void sieve() {
    for(int i = 1; i < maxN; i++) {
        for(int j = i; j < maxN; j+=i) {
            divisor[j]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < maxN; i++) {
        divisor[i] = 0;
    }
    sieve();
    pre[0] = 0;
    for(int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + divisor[i];
    }

    cout << pre[n - 1] nl;
}
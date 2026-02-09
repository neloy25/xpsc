#include<bits/stdc++.h>
using namespace std;

const int N = 100;
vector<int> sieve() {
    vector<int> primes;

    vector<bool> prime(N + 1, true);

    for(int i = 2; i <= N; i++) {
        if(prime[i]) {
            for(int j = i + i; j <= N; j+=i) {
                prime[j] = false;
            }
        }
    }

    for(int i = 2; i < N; i++) {
        if(prime[i]) primes.push_back(i);
    }
    return primes;
}

int main() {
    vector<int> primes = sieve();

    map<int, int> factors;

    int n;
    cin >> n;
    
    for(int val : primes) {
        while(n % val == 0) {
            n /= val;
            factors[val]++;
        }

        if(n == 1) break;
    }

    for(auto [key,val] : factors) {
        cout << key << " -> " << val << endl;
    }
}
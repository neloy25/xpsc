#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(ll n) {
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;

        ll a = -1, b = -1;
        for(ll i = x; i < x + 1000; i++) {
            if(isPrime(i)) {
                if(a == -1) {
                    a = i;
                } else {
                    b = i;
                    break;
                }
            }
        }

        cout << a * b << endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int k = 0;
    int res = 0;
    while(n != 0) {
        int r = (n % 10);
        if(r == 7) res+= (1 << (k + 1));
        else res+= (1 << k);
        k++;
        n/=10;
    }

    cout << res nl;
    return 0;
}
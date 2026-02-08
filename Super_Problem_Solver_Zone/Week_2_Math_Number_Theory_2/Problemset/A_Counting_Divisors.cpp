#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        int res = 0;
        for(int j = 1; j * j <= x; j++) {
            if(x % j == 0) {
                if(j == (x/ j)) res++;
                else res+=2;
            }
        }

        cout << res << endl;
    }
}
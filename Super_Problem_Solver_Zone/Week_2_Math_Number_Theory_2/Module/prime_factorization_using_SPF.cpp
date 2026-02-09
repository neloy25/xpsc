#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    while(n > 1) {
        bool flag = false;
        for(int i = 2; i * i <= n; i++) {
            cnt++;
            if(n % i == 0) {
                cout << i << " ";
                n /= i;
                flag = true;
                break;
            }
        }

        if(!flag) {
            cout << n << " ";
            break;
        }
    }

    cout << endl << cnt;
}
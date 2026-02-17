#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    if(n == 0) {
        return;
    }
    cout << n << " ";
    print(n - 1);
    print(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    print(n);

    return 0;
}
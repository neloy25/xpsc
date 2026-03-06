#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;

    ans += max(0, min(n,9));
    ans += max(0, min(n,999) - 99);
    ans += max(0, min(n,99999) - 9999);

    cout << ans;
}
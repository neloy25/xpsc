#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll dp[101];
    dp[0] = 0;

    for(int i = 1;i<= 100;i++){
        dp[i] = i * i + dp[i - 1];
    }

    while(1){
        int n;
        cin >> n;
        if(n == 0) break;
        cout << dp[n] << endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define N 200000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int diff[N + 2] = {0};
    int pre[N + 2] = {0};
    int n,k,q;
    cin >> n >> k >> q;

    for(int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        diff[a]++;
        diff[b + 1]--;
    }

    for(int i = 1; i <= N; i++) {
        diff[i] = diff[i - 1] + diff[i];
        if(diff[i] >= k) pre[i] = pre[i - 1] + 1;
        else pre[i] = pre[i - 1];
    }

    for(int i = 1; i <= q; i++) {
        int l ,r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << endl;
    }
    return 0;
}


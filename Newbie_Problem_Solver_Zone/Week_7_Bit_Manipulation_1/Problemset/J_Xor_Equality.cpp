#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define MAX 100005
#define MOD 1000000007

int arr[MAX];
void solve() {
    int n;
    cin >> n;

    cout << arr[n] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    arr[1] = 1;
    for(int i = 2; i < MAX; i++) {
        arr[i] = (arr[i - 1] * 2) % MOD;
    }
    while(t--) solve();
    return 0;
}


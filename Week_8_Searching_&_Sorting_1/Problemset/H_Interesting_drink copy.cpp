#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define MAX 100005

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    
    ll mx = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mx = max(mx,v[i]);
    }

    sort(v.begin(),v.end());
    int arr[MAX];
    arr[0] = 0;
    for(int i = 1; i <= mx + 1; i++) {
        arr[i] = arr[i - 1];
        arr[i] += upper_bound(v.begin(), v.end(), i) - lower_bound(v.begin(), v.end(), i);
    }

    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        if(k > mx) cout << arr[mx] << endl;
        else cout << arr[k] << endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}


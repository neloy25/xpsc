#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n,x;
    cin >> n >> x;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long l = 0, r = 0;
    long long sum = 0;
    long long res = 0;
    while(r < n) {
        if(arr[r] > x) {
            r++;
            l = r;
            sum = 0;
        } else if(arr[r] == x) {
            r++;
            l = r;
            sum = 0;
            res = max(1LL,res);
        } else{
            sum += arr[r];
            while(sum > x) {
                sum -= arr[l];
                l++;
            }
            res = max(res, r - l + 1);
            r++;
        }
    }
    cout << res << endl;
    return 0;
}


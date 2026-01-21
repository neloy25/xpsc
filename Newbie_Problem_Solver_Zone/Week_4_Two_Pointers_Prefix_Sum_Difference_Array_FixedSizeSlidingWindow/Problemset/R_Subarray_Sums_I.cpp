#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    ll x;
    cin >> n >> x;

    vector<int> data(n);
    for(auto &x : data) cin >> x;

    int j = 0;
    ll sum = 0;
    int res = 0;
    for(int i = 0; i < n; i++){
        if(data[i] > x) {
            sum = 0;
            j = i + 1;
        } else if(data[i] == x) {
            res++;
            sum = 0;
            j = i + 1;
        } else{
            sum += data[i];

            while(sum >= x) {
                if(sum == x) {
                    res++;
                }
                sum -= data[j];
                j++;
            }
        }
    }

    cout << res << endl;

    return 0;
}


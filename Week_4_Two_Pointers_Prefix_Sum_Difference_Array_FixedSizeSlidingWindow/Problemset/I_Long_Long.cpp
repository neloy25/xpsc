#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            sum+= abs(v[i]);
        }

        bool flag = false;
        int res = 0;
        for(int i = 0; i < n; i++) {
            flag = false;
            while(v[i] <= 0 && i < n) {
                if(v[i] < 0) flag = true; 
                i++;
            }
            if(flag) res++;
        }

        cout << sum << " " << res << endl;
    }
    return 0;
}


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
        vector<pair<int,int>> ab(n + 1);
        ab[0] = {0,0};

        for(int i = 1; i <= n; i++) {
            int a,b;
            cin >> a >> b;
            ab[i] = {a,b};
        }

        int arr, dept = 0;
        for(int i = 1; i <= n;i++) {
            int val;
            cin >> val;

            int time = ab[i].first - ab[i - 1].second + val;
            arr = dept + time;

            dept = arr + ceil(((double)(ab[i].second - ab[i].first) / 2));
            dept = max(dept,ab[i].second);
        }

        cout << arr << endl;
    }
    return 0;
}

